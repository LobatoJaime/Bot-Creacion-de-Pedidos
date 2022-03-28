import datetime


def format_date(client_v: str, date_format: str) -> str:
    """Transforma la fecha obtenida por la AI y la transforma al
    formato universal de dd/mm/yyyy"""
    week = ''
    day = ''
    month = ''
    year = ''
    if date_format == 'dd/mm/yyyy':
        if 'W' in client_v:
            position = 0
            for char in client_v:
                if char.isdigit():
                    if len(week) < 2:
                        week = week.__add__(char)
                    else:
                        year = year.__add__(char)
                    if len(week) == 1:
                        if client_v[position + 2].isdigit():
                            week = '0' + week
                position = position + 1
        elif 'M' not in client_v:
            position = 0
            for char in client_v:
                if char.isdigit():
                    if len(day) < 2:
                        day = day.__add__(char)
                    elif len(month) < 2:
                        month = month.__add__(char)
                    else:
                        year = year.__add__(char)
                    if len(month) == 1:
                        if client_v[position + 2].isdigit():
                            month = '0' + month
                    if len(day) == 1:
                        if client_v[position + 2].isdigit():
                            day = '0' + day
                position = position + 1

        elif 'M' in client_v:
            day = '01'
            position = 0
            for char in client_v:
                if char.isdigit():
                    if len(month) < 2:
                        month = month.__add__(char)
                    else:
                        year = year.__add__(char)
                    if len(month) == 1:
                        if client_v[position + 2].isdigit():
                            month = '0' + month
                    if len(day) == 1:
                        if client_v[position + 2].isdigit():
                            day = '0' + day
                position = position + 1

    elif date_format == 'mm/dd/yyyy':
        if 'M' not in client_v:
            position = 0
            for char in client_v:
                if char.isdigit():
                    if len(month) < 2:
                        month = month.__add__(char)
                    elif len(day) < 2:
                        day = day.__add__(char)
                    else:
                        year = year.__add__(char)
                    if len(month) == 1:
                        if client_v[position + 2].isdigit():
                            month = '0' + month
                    if len(day) == 1:
                        if client_v[position + 2].isdigit():
                            day = '0' + day
                position = position + 1
        elif 'M' in client_v:
            day = '01'
            position = 0
            for char in client_v:
                if char.isdigit():
                    if len(month) < 2:
                        month = month.__add__(char)
                    else:
                        year = year.__add__(char)
                    if len(month) == 1:
                        if client_v[position + 2].isdigit():
                            month = '0' + month
                    if len(day) == 1:
                        if client_v[position + 2].isdigit():
                            day = '0' + day
                position = position + 1
    if week != '':
        date = '{}-W{}'.format(year, week)
        day = '-4'  # Jueves
        result = datetime.datetime.strptime(date + day, "%Y-W%W-%w")
        predicted_v = result.strftime('%d/%m/%Y')
    else:
        if len(year) == 2:
            year = '20'+year
        predicted_v = '{}/{}/{}'.format(day, month, year)
    return predicted_v
