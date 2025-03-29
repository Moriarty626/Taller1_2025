
#define GESTOR_DE_CANCIONES_H
#ifndef GESTOR_CANCIONES_H
#define GESTOR_CANCIONES_H

#include "cancion.h"

class GestorCanciones {
private:
  cancion* canciones;  // Puntero a un arreglo dinámico
  int cantidad;
  int capacidad;

  // Método privado para redimensionar el arreglo dinámico
  void redimensionar(int nuevaCapacidad);

public:
  // Constructor y destructor
  GestorCanciones();
  ~GestorCanciones();

  // Métodos principales
  void agregarCancion(const cancion& nuevaCancion);
  bool eliminarCancion(int id);
  cancion* buscarCancion(int id);
  void ordenarCanciones(bool ascendente);
  void mostrarCanciones() const;
};

#endif // GESTOR_CANCIONES_H
