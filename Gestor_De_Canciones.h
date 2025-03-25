

#ifndef GESTOR_DE_CANCIONES_H
#define GESTOR_DE_CANCIONES_H

#include "cancion.h"

class Gestor_De_Canciones {

private:
  cancion* canciones;
  int cant_Canciones;
  int total_Canciones;

public:
  // Constructor y destructor
  Gestor_De_Canciones();
  ~Gestor_De_Canciones();

  // Metodos principales
  void agregar_Cancion(cancion& nueva_Cancion);
  cancion* buscar_Cancion(int id);
  void ordenar_Canciones(bool ascendente);
  void mostrar_Canciones();
};



#endif //GESTOR_DE_CANCIONES_H
