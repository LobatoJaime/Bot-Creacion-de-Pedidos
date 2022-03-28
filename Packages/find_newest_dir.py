import os
import operator
import glob


def find_newest_dir(directory: str) -> str:
    """Encuentra la carpeta mas reciente en un directorio"""
    os.chdir(directory)
    dirs = {}
    for dir in glob.glob('*'):
        if os.path.isdir(dir):
            dirs[dir] = os.path.getctime(dir)

    lister = sorted(dirs.items(), key=operator.itemgetter(1))
    newest_dir = os.path.join(directory, lister[-1][0])
    return newest_dir

