# mypyc: compile
from dataclasses import dataclass

"""Note: default variables are only added here to comply with the compiler without running errors at compile time
    and to make the code mypy compliant.
    Make sure to test interpolation in runtime when adding.

   Important: if adding lists or dicts, DO NOT just add empty values like mutables!
   import the field function from dataclasses and pass through the types as the default_factory param.

   Example:
       @dataclass
       class ExampleDataclass:
           useful_list: list[str] = field(default_factory=list)
           useful_dict: dict[str,str] = field(default_factory=dict)

"""


@dataclass
class ConfigPath:
    # This one is actually set by default and not abstracted from another source, the goal here is for this to be the only default prop
    config_path: str = "application.yml"


@dataclass
class AppConfig:
    app_name: str = "livstop"
    environement: str = "production"
    host: str = ""
    port: int = 8000


@dataclass
class DataSource:
    static_source_url: str = ""
    realtime_trip_updates_url: str = ""


@dataclass
class MetaConfig:
    static_refresh_interval_hrs: int = 0
    static_request_timeout_secs: int = 0
    static_sync_check_interval_secs: int = 0
    auto_download_static: bool = True
    realtime_poll_interval_secs: int = 0
    realtime_request_timeout_secs: int = 0
    bootstrap_schema: bool = True
    sync_batch_size: int = 0
    auto_sync_start: bool = True


@dataclass
class Secrets:
    NTA_KEY_PRIMARY: str = ""
    NTA_KEY_SECONDARY: str = ""


@dataclass
class LoggerConfig:
    log_dir: str = ""
    debug_filepath: str = ""
    error_filepath: str = ""
    warning_filepath: str = ""
    info_filepath: str = ""
