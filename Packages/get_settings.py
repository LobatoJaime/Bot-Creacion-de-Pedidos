from .constants import settings_xlsx_path
import pandas as pd


def get_settings() -> pd.DataFrame:
    settings_data = pd.read_excel(settings_xlsx_path, dtype=str)
    settings = pd.DataFrame(settings_data, dtype=str)
    return settings
