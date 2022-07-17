from distutils.core import setup, Extension

setup(name="Crzctl", 
    version="0.1.0",
    author="Gurkan Karadag",
    author_email="gurkan.karadag.1907@gmail.com",
    ext_modules=[Extension("Crzctl", sources=["main.cpp", "nt.cpp", "rzctl.cpp"], language="c++")])