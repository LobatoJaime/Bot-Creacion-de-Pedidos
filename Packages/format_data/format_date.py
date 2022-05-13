import datetime


def format_date(date: str) -> str:
    """Acepta los formatos de dd/mm/yyyy, dd/mm/yy\n
        dd.mm.yyyy, dd.mm.yy y los convierte en dd/mm/yyyy"""
    day = ''
    month = ''
    year = ''

    position = 0
    for char in date:
        if char.isdigit():
            if len(day) < 2:
                day = day.__add__(char)
            elif len(month) < 2:
                month = month.__add__(char)
            else:
                year = year.__add__(char)
            if len(month) == 1:
                if date[position + 2].isdigit():
                    month = '0' + month
            if len(day) == 1:
                if date[position + 2].isdigit():
                    day = '0' + day
        position = position + 1

    if len(year) == 2:
        year = '20'+year
    formatted_date = '{}/{}/{}'.format(day, month, year)
    return formatted_date
