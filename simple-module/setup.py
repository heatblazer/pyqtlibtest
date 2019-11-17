from distutils.core import setup, Extension

extension_mod1 = Extension("endianSwap32", ["py_endianSwap32", "_simple-module.c"])

setup(name="endianSwap", ext_modules=[extension_mod1])


