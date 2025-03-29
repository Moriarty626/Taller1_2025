#include <iostream>
#include "Gestor_De_Canciones.h"
#include "cancion.h"

// Constructor
GestorCanciones::GestorCanciones() {
    capacidad = 5;
    cantidad = 0;
    canciones = (cancion*) malloc(capacidad * sizeof(cancion));

    if (!canciones) {
        std::cerr << "Error: No se pudo asignar memoria." << std::endl;
        exit(EXIT_FAILURE);
    }
}

// Destructor
GestorCanciones::~GestorCanciones() {
    free(canciones);  // Liberar la memoria asignada
}

// Método privado para redimensionar el arreglo dinámico
void GestorCanciones::redimensionar(int nuevaCapacidad) {
    cancion* nuevoArreglo = (cancion*) realloc(canciones, nuevaCapacidad * sizeof(cancion));

    if (!nuevoArreglo) {
        std::cerr << "Error: No se pudo redimensionar el arreglo." << std::endl;
        exit(EXIT_FAILURE);
    }

    canciones = nuevoArreglo;
    capacidad = nuevaCapacidad;
}

// Agregar una canción al arreglo dinámico
void GestorCanciones::agregarCancion(const cancion& nuevaCancion) {
    // Si el arreglo está lleno, duplicamos la capacidad
    if (cantidad == capacidad) {
        redimensionar(capacidad * 2);
    }

    // Copiar la nueva canción en el arreglo
    canciones[cantidad] = nuevaCancion;
    cantidad++;
}

// Eliminar una canción por ID y reducir tamaño si es necesario
bool GestorCanciones::eliminarCancion(int id) {
    int indice = -1;

    // Buscar la canción en el arreglo
    for (int i = 0; i < cantidad; i++) {
        if (canciones[i].getId() == id) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        return false;  // No se encontró la canción
    }

    // Mover los elementos hacia la izquierda para llenar el espacio vacío
    for (int i = indice; i < cantidad - 1; i++) {
        canciones[i] = canciones[i + 1];
    }

    cantidad--;

    // Reducir la capacidad si hay demasiado espacio desperdiciado
    if (cantidad < capacidad / 4 && capacidad > 5) {
        redimensionar(capacidad / 2);
    }

    return true;
}

// Buscar una canción por ID
cancion* GestorCanciones::buscarCancion(int id) {
    for (int i = 0; i < cantidad; i++) {
        if (canciones[i].getId() == id) {
            return &canciones[i];
        }
    }
    return nullptr;
}

// Ordenar canciones por número de reproducciones (Bubble Sort)
void GestorCanciones::ordenarCanciones(bool ascendente) {
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - i - 1; j++) {
            bool condicion = ascendente ? canciones[j].getReproducciones() > canciones[j + 1].getReproducciones()
                                        : canciones[j].getReproducciones() < canciones[j + 1].getReproducciones();
            if (condicion) {
                cancion temp = canciones[j];
                canciones[j] = canciones[j + 1];
                canciones[j + 1] = temp;
            }
        }
    }
}

// Mostrar todas las canciones
void GestorCanciones::mostrarCanciones() const {
    for (int i = 0; i < cantidad; i++) {
        canciones[i].mostrarInfo();
    }
}