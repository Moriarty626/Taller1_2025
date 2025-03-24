cmake_minimum_required(VERSION 3.30)
project(taller1)

set(CMAKE_CXX_STANDARD 20)

add_executable(taller1 main.cpp
        cancion.cpp
        cancion.h
        Album.cpp
        Album.h
        Aplicacion.cpp
        Aplicacion.h)
