

#ifndef LISTA_ENLAZADA_CANCIONES_H
#define LISTA_ENLAZADA_CANCIONES_H

#include "Album.h"


class nodoAlbum{
  public:
    Album album;
    nodoAlbum* siguiente;

    nodoAlbum(Album &album): album(album), siguiente(NULL){}
};

class lista_Enlazada_Canciones {
   private:
     nodoAlbum* cabeza;
   public:
     // Constructor y Destructor
     lista_Enlazada_Canciones();
     ~lista_Enlazada_Canciones();

     // Metodos principales
     void insertarOrdenado(Album &album);
     Album* buscarAlbum(int id);
     bool eliminarAlbum(std::string & titulo);
     void mostrarLista();
};



#endif //LISTA_ENLAZADA_CANCIONES_H
