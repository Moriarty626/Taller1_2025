

#include "Album.h"

Album::Album(int id, std::string titulo, int anio, bool es_De_Estudio) {
    this->id = id;
    this->titulo = titulo;
    this->anio = anio;
    this->es_De_Estudio = es_De_Estudio;

}

bool Album::get_es_De_Estudio() {
    this -> es_De_Estudio = true;
}

void Album::set_es_De_Estudio(bool nuevoValor) {
    this->es_De_Estudio = nuevoValor;
}

int Album::getId() {
    return this->id;
}

std::string Album::getTitulo() {
    return this->titulo;
}

int Album::getAnio() {
    return this->anio;
}


void Album::setTitulo(std::string nuevoTitulo) {
    this->titulo = nuevoTitulo;
}

void Album::setAnio(int nuevoAnio) {
    this->anio = nuevoAnio;
}


void Album::agregarCancion(int idCancion) {
}

bool Album::eliminarCancion(int idCancion) {
}

void Album::mostrarInfo() {

}

bool Album::operator<(Album &otro) {

    return 0;
}
