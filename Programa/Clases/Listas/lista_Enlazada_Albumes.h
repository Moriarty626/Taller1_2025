#ifndef LISTA_ENLAZADA_ALBUMES_H
#define LISTA_ENLAZADA_ALBUMES_H

#include "Album.h"

class nodoAlbum {
public:
  Album album;
  nodoAlbum* siguiente;
  nodoAlbum(Album& album) : album(album), siguiente(nullptr) {}
};

class lista_Enlazada_Albumes {
private:
  nodoAlbum* cabeza;

public:
  lista_Enlazada_Albumes();
  ~lista_Enlazada_Albumes();

  // metodos principales
    void insertarOrdenado(Album& nuevoAlbum);
    Album* buscarAlbum(int id);
    bool eliminarAlbum(std::string && titulo);
    void mostrarListaAlbums();

};



#endif //LISTA_ENLAZADA_ALBUMES_H
