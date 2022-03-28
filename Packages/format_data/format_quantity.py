

def format_quantity(client_number: str, decimal_sep: str) -> str:
    """Formatea el numero recibido por la AI en un numero entero"""
    formatted_number = ''
    for char in client_number:
        if char.isdigit():
            formatted_number = formatted_number.__add__(str(char))
        elif char == decimal_sep:
            break
    return formatted_number
