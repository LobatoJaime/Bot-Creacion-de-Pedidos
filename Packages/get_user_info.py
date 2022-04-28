import ctypes
import os


def get_user_info() -> [str, str]:
    """Devuevle el display name y login del usuario
    returns [display_name, login]"""
    GetUserNameEx = ctypes.windll.secur32.GetUserNameExW
    NameDisplay = 3
    size = ctypes.pointer(ctypes.c_ulong(0))
    GetUserNameEx(NameDisplay, None, size)
    nameBuffer = ctypes.create_unicode_buffer(size.contents.value)
    GetUserNameEx(NameDisplay, nameBuffer, size)
    return [nameBuffer.value, os.getlogin()]

