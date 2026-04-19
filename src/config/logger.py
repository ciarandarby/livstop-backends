import logging
import sys
from pathlib import Path

"""Note: this is not an entrypoint file and should be imported from the gobal config.py injecting file dir args from the application.yml"""


class LevelFilter(logging.Filter):
    def __init__(self, level: int) -> None:
        super().__init__()
        self.level: int = level

    def filter(self, record: logging.LogRecord) -> bool:
        return record.levelno == self.level


def _handler(handler: logging.Handler, level: int) -> logging.Handler:
    formatter: logging.Formatter = logging.Formatter(
        fmt="%(asctime)s | %(levelname)-8s | %(name)s | %(message)s",
        datefmt="%Y-%m-%d %H:%M:%S",
    )
    handler.setFormatter(formatter)
    handler.setLevel(level)
    return handler


def _get_logger(
    name: str,
    log_dir: str,
    debug_file: str,
    info_file: str,
    warning_file: str,
    error_file: str,
) -> logging.Logger:
    log_dir_path: Path = Path(log_dir)
    log_dir_path.mkdir(parents=True, exist_ok=True)

    logger: logging.Logger = logging.getLogger(name)

    if logger.handlers:
        return logger

    logger.setLevel(logging.DEBUG)

    console_handler: logging.Handler = _handler(
        logging.StreamHandler(sys.stdout),
        logging.INFO,
    )
    logger.addHandler(console_handler)

    debug_path: Path = log_dir_path / debug_file
    info_path: Path = log_dir_path / info_file
    warning_path: Path = log_dir_path / warning_file
    error_path: Path = log_dir_path / error_file

    debug_handler: logging.Handler = _handler(
        logging.FileHandler(debug_path),
        logging.DEBUG,
    )
    info_handler: logging.Handler = _handler(
        logging.FileHandler(info_path),
        logging.INFO,
    )
    warning_handler: logging.Handler = _handler(
        logging.FileHandler(warning_path),
        logging.WARNING,
    )
    error_handler: logging.Handler = _handler(
        logging.FileHandler(error_path),
        logging.ERROR,
    )

    info_filter: LevelFilter = LevelFilter(logging.INFO)
    warning_filter: LevelFilter = LevelFilter(logging.WARNING)
    error_filter: LevelFilter = LevelFilter(logging.ERROR)

    info_handler.addFilter(info_filter)
    warning_handler.addFilter(warning_filter)
    error_handler.addFilter(error_filter)

    logger.addHandler(debug_handler)
    logger.addHandler(info_handler)
    logger.addHandler(warning_handler)
    logger.addHandler(error_handler)

    logger.propagate = False

    return logger
