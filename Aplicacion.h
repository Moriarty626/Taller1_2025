

#ifndef APLICACION_H
#define APLICACION_H

#include "album.h"
#include "cancion.h"
#include "lista_Enlazada_Canciones.h"  // Clase para manejar la lista de álbumes
#include "Gestor_De_Canciones.h"       // Clase para manejar el arreglo dinámico de canciones

class Aplicacion {
private:
    lista_Enlazada_Canciones listaAlbumes;
    Gestor_De_Canciones gestorCanciones;
public:
    // Constructor
    Aplicacion();

    // Metodos principales
    void cargarDatos();
    void mostrarMenu();
    void ejecutar();
    void cargarAlbumesCSV(std::string& nombreArchivo);
    void cargarCancionesCSV(std::string& nombreArchivo);

};



#endif //APLICACION_H
