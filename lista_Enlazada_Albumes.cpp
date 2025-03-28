
#include "lista_Enlazada_Albumes.h"
#include <iostream>

// Constructor
lista_Enlazada_Albumes::lista_Enlazada_Albumes() {
    cabeza = nullptr;
}

// Destructor
lista_Enlazada_Albumes::~lista_Enlazada_Albumes() {
  nodoAlbum* actual = cabeza;
  while (actual != nullptr) {
    nodoAlbum* temp = actual;
    cabeza = actual;
    actual = actual->siguiente;
    delete temp;
  }

}

void lista_Enlazada_Albumes::insertarOrdenado(Album& nuevoAlbum) {
  nodoAlbum* nuevoNodo  = new nodoAlbum(nuevoAlbum);
  		if (!cabeza || nuevoAlbum.getId() < cabeza->album.getId()) {
			nuevoNodo->siguiente = cabeza;
            cabeza = nuevoNodo;
            return;
  		}
  nodoAlbum* actual = cabeza;
  while (actual->siguiente && actual->album.getId() < nuevoAlbum.getId()) {
    actual = actual->siguiente;
  }
  nuevoNodo->siguiente = actual->siguiente;
  actual->siguiente = nuevoNodo;
}

// buscar album por ID
Album* lista_Enlazada_Albumes::buscarAlbum(int id) {


}