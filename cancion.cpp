
#include "cancion.h"

cancion::cancion(int id_Cancion, int id_album, std::string titulo, int reproducciones, std::string duracion) {
    this->id_cancion = id_Cancion;
    this->album_id = id_album;
    this->titulo = titulo;
    this->reproducciones = reproducciones;
    this->duracion = duracion;
}

int cancion::getId() {
    return id_cancion;
}

int cancion::getAlbumId() {
    return album_id;
}

std::string cancion::getTitulo() {
    return titulo;
}

int cancion::getReproducciones() {
    return reproducciones;
}

std::string cancion::getDuracion() {
    return duracion;
}

void cancion::setTitulo(std::string nuevoTitulo) {
    this->titulo = nuevoTitulo;
}

void cancion::setReproducciones(int nuevasReproducciones) {
    this->reproducciones = nuevasReproducciones;
}

void cancion::setDuracion(std::string nuevaDuracion) {
    this->duracion = nuevaDuracion;
}

void cancion::mostrarInfo(){
    this -> id_cancion = getId();
}

bool cancion::coincideTitulo(std::string &filtro){
    this->titulo = filtro;
}

bool cancion::operator<( cancion &otra){
    return this->id_cancion < otra.getId();
}
