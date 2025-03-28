
#include "lista_Enlazada_Albumes.h"
#include <iostream>

// Constructor
lista_Enlazada_Albumes::Lista_Enlazada_Albumes() {
    cabeza = nullptr;
}

// Destructor
lista_Enlazada_Albumes::~Lista_Enlazada_Albumes() {
  NodoAlbum* actual = cabeza;
  while (actual != nullptr) {
    NodoAlbum* temp = actual;
    cabeza = actual;
    actual = actual->siguiente;
    delete temp;
  }

}

void lista_Enlazada_Albumes::insertarOrdenado(Album& nuevoAlbum) {
  NodoAlbum* nuevoNodo  = new NodoAlbum(nuevoAlbum);
  		if (!cabeza || nuevoAlbum.getId() < cabeza->album.getId()) {
			nuevoNodo->siguiente = cabeza;
            cabeza = nuevoNodo;
            return;
  		}
  NodoAlbum* actual = cabeza;
  while (actual->siguiente && actual->album.getId() < nuevoAlbum.getId()) {
    actual = actual->siguiente;
  }
  nuevoNodo->siguiente = actual->siguiente;
  actual->siguiente = nuevoNodo;
}

// buscar album po ID
Album* lista_Enlazada_Albumes::buscarAlbum(std::string& titulo) {
	if (!cabeza) return false;
      if (cabeza->album.getId() == titulo) {
        NodoAlbum* temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp;
        return true;
      }
      NodoAlbum* actual = cabeza;
      while (actual && actual->album.getId() < titulo) {
        actual = actual->siguiente;
      }
      if (actual -> siguiente) {
        NodoAlbum* temp = actual->siguiente;
        actual->siguiente = temp->siguiente;
        delete temp;
        return true;
      }
      return false;

}