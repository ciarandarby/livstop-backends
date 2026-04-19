# mypyc: compile
import inspect
import logging
from dataclasses import dataclass, field
from os.path import expandvars
from types import ModuleType

from yamldataclassconfig import YamlDataClassConfig as Application

from dto.settings import (
    AppConfig,
    ConfigPath,
    DataSource,
    LoggerConfig,
    MetaConfig,
    Secrets,
)
from src.config.logger import _get_logger


@dataclass
class Configs(Application):
    app: AppConfig = field(default_factory=AppConfig)
    data_source: DataSource = field(default_factory=DataSource)
    meta_config: MetaConfig = field(default_factory=MetaConfig)
    secrets: Secrets = field(default_factory=Secrets)
    logs: LoggerConfig = field(default_factory=LoggerConfig)


def _exp_config(config_yml_path: str = ConfigPath.config_path) -> str:
    """For simple env variable interpolation"""
    with open(config_yml_path, "r", encoding="utf-8") as f:
        content: str = expandvars(f.read())

    return content


def load_config(config_yml_path: str = ConfigPath.config_path) -> Configs:
    config: Configs = Configs()
    stream: str = _exp_config(config_yml_path=config_yml_path)
    config.load(stream)
    return config


settings: Configs = Configs()
settings.load(_exp_config(config_yml_path=ConfigPath.config_path))


def get_logger() -> logging.Logger:
    f: inspect.FrameInfo = inspect.stack()[1]
    mod: ModuleType | None = inspect.getmodule(f.frame)
    mod_name: str = mod.__name__ if mod else "__main__"

    return _get_logger(
        name=mod_name,
        log_dir=settings.logs.log_dir,
        debug_file=settings.logs.debug_filepath,
        info_file=settings.logs.info_filepath,
        warning_file=settings.logs.warning_filepath,
        error_file=settings.logs.error_filepath,
    )
