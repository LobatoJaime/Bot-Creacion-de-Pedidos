
def close_splash_screen():
    """Funcion que cierra el splash screen generado por
    pyinstaller"""
    try:
        import pyi_splash
        pyi_splash.update_text('UI Loaded ...')
        pyi_splash.close()
    except ImportError:
        pass
    except KeyError or RuntimeError:
        pass
    except Exception:
        import traceback
        print(traceback.print_exc())
