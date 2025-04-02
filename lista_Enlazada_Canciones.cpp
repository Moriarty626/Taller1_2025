

#include "lista_Enlazada_Canciones.h"

#include <iostream>

// Constructor
lista_Enlazada_Canciones::lista_Enlazada_Canciones() {
  cabeza = nullptr;
}

// Destructor
lista_Enlazada_Canciones::~lista_Enlazada_Canciones() {
  nodoAlbum* actual = cabeza;
  while (actual != nullptr) {
        nodoAlbum* temp = actual;
        actual = actual->siguiente;
        delete temp;
  }
}
// Insertar un album en orden (segun id)
void lista_Enlazada_Canciones::insertarOrdenado(Album &nuevoAlbum) {
  nodoAlbum* nuevoNodo = new nodoAlbum(nuevoAlbum);

  if (!cabeza || nuevoAlbum.getID() < cabeza->album.getID()) {
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
        return;
  }

  nodoAlbum* actual = cabeza;
  while (actual->siguiente && nuevoAlbum.getID() < actual->album.getID()) {
        actual = actual->siguiente;
  }

  nuevoNodo->siguiente = actual -> siguiente;
  actual -> siguiente = nuevoNodo;
}

// buscar album por ID
Album* lista_Enlazada_Canciones::buscarAlbum(int id) {
  nodoAlbum* actual = cabeza;
  while (actual) {
    if (actual->album.getID() == id) {
      return &(actual -> album);
    }
    actual = actual -> siguiente;
  }
  return nullptr;
}

// eliminar album por titulo
bool lista_Enlazada_Canciones::eliminarAlbum(std::string & titulo) {
  if (!cabeza) {
    return false;
  }
  if (!cabeza -> album.getTitulo().compare(titulo)) {

  }
}