#ifndef APLICACION_H
#define APLICACION_H

#include <string>
#include "lista_Enlazada_Albumes.h"  // Asegúrate de que tienes esta clase
#include "Gestor_De_Canciones.h"     // Asegúrate de que tienes esta clase
#include "Album.h"

class Aplicacion {
private:
    lista_Enlazada_Albumes listaAlbumes;  // Estructura para almacenar álbumes
    GestorCanciones gestorCanciones;  // Estructura para almacenar canciones

    void cargarAlbumesCSV(const std::string &nombreArchivo);
    void cargarCancionesCSV(const std::string &nombreArchivo);
    void mostrarMenu();  // Menú interactivo para el usuario

public:
    // Constructor
    Aplicacion();

    // Método para cargar datos desde archivos CSV
    void cargarDatos();

    // Método principal para ejecutar la aplicación
    void ejecutar();
};

#endif // APLICACION_H
