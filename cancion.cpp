#include "cancion.h"

// Constructor por defecto
cancion::cancion() {
    id_cancion = 0;
    album_id = 0;
    titulo = "";
    reproducciones = 0;
    duracion = "0:00";
}

// Constructor con parámetros
cancion::cancion(int id_Cancion, int id_album, std::string titulo, int reproducciones, std::string duracion) {
    this->id_cancion = id_Cancion;
    this->album_id = id_album;
    this->titulo = titulo;
    this->reproducciones = reproducciones;
    this->duracion = duracion;
}

// Destructor
cancion::~cancion() {
    // Si en el futuro hay memoria dinámica, se liberaría aquí.
}

// Métodos getters
int cancion::getId() const {
    return id_cancion;
}

int cancion::getAlbumId() const{
    return album_id;
}

std::string cancion::getTitulo() const {
    return titulo;
}

int cancion::getReproducciones() const {
    return reproducciones;
}

std::string cancion::getDuracion() const {
    return duracion;
}

// Verificar si el título coincide con el filtro
bool cancion::coincideTitulo(const std::string &filtro) const {
    return titulo == filtro;
}

// Operador de comparación para ordenar canciones por ID
bool cancion::operator<(const cancion &otra) const {
    return id_cancion < otra.id_cancion;
}
