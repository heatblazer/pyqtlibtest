from distutils.core import setup, Extension
from distutils import sysconfig

extension_mod1 = Extension(
    "endianSwap32", sources = ["simplemodule.c"],
    language='c')

setup(name="endianSwap", 
    version='1.0',
    description = 'simple C code package',
    ext_modules=[extension_mod1])


