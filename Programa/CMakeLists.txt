cmake_minimum_required(VERSION 3.30)
project(taller1)

set(CMAKE_CXX_STANDARD 20)

add_executable(taller1
        main.cpp
        Clases/Cancion.cpp
        Clases/Album.cpp
        Clases/Listas/Gestor_De_Canciones.cpp
        Clases/Listas/lista_Enlazada_Albumes.cpp
        Aplicacion.cpp
)
