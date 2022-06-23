import pandas as pd


def handler(df_list, table_fields_list, provider_name, provider_data):
    """
    Transforms a given list of dataframes into a suitable one

    The content of the cells cannot be modified, it should only be used to search for keywords to make the table
    The content of cells can be a tuple of text and confidence (one line of text)
    or a list of tuples(more than one line)

    Parameters:
        df_list: Input lists of dataframes
        table_fields_list: List of table fields names
        provider_name: Name of the provider
        provider_data: Provider data extracted from the configuration file

    Returns:
        Output dataframe in this form:
        field1          | field2        | field3
        (text, conf)    (text, conf)    (text, conf)
        (text, conf)    (text, conf)    (text, conf)
        ...             ...             ...
    """
    # CUSTOM_PROVIDERS = ("Skyway")
    # provider_name = "" if provider_name not in CUSTOM_PROVIDERS else provider_name

    df_output = pd.DataFrame()

    data_table = provider_data["table"]
    data_fields = provider_data["fields"]
    print("-----------")
    print("-----------")
    print("-----------")

    if provider_name == "Skyway":
        df_output = default_handler(df_list, table_fields_list, data_fields)
        df_output = propagate_handler(df_output, "reference")
        # Borro las filas que tienen campo a None
        df_output = df_output[df_output["arrival_date"].notnull()]
    else:
        df_output = default_handler(df_list, table_fields_list, data_fields)

    print(df_output.to_string())
    return df_output


def default_handler(df_list, table_fields_list, data_fields):
    """
    Concatenate the list of dataframes into one dataframe, removes the headers and removes None rows
    """
    df_output = pd.DataFrame(columns=table_fields_list)
    for df in df_list:
        df_output_aux = pd.DataFrame(columns=table_fields_list)
        # Borro la fila del header
        df = df.iloc[1:]
        # Asigo las columnas correspondientes a las columnas de los campos
        for field in table_fields_list:
            df_output_aux[field] = pd.Series(df.iloc[:, data_fields[field]["column_pos"] - 1])
        # Borro filas None
        df_output_aux = df_output_aux.dropna(how="all")
        # Concateno los dataframes
        df_output = pd.concat([df_output, df_output_aux], ignore_index=True)

    return df_output


def propagate_handler(df, only_field):
    """
    Input:
        field1      | field2    | field1
        value1.1    value2.X    value3.X
        ''          value2.1    value3.1
        ''          value2.2    value3.2
        value1.2    value2.X    value3.X
        ''          value2.3    value3.3
        ''          value2.4    value3.4
    Output:
        field1      | field2    | field3
        value1.1    value2.1    value3.1
        value1.1    value2.2    value3.2
        value1.2    value2.3    value3.3
        value1.2    value2.4    value3.4
    """
    #
    # df['New'] = df['reference'].where(df['reference'] is not None or df['reference'][0] != "").ffill()
    # df['A'].map(lambda x: x[0] if type(x) is tuple and len(x) > 0 and x[0] == 34 else None)

    # Creo columna indicando si hay texto
    df["existsText"] = df[only_field].map(lambda x: True if type(x) is tuple and len(x) > 0 and x[0].strip() else False)
    print(df.to_string())
    # Relleno los valores de la columna
    df[only_field] = df[only_field].where(df["existsText"]).ffill()
    print(df.to_string())
    # Borro las filas que no tienen
    df = df[df["existsText"] == False]

    print(df.to_string())

    return df
