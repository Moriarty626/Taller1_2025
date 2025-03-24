

#ifndef ALBUM_H
#define ALBUM_H

#include <iostream>


class Album {
private:
    int id;                        // Identificador único del álbum
    std::string titulo;            // Nombre del álbum
    int anio;                      // Año de publicación
    bool es_De_Estudio;            // Indica si es un álbum de estudio (true) o en vivo (false)
        // Hacer una lista enlazada que almacene las canciones por su id

public:
    // Constructor
    Album(int id, std::string titulo, int anio, bool es_De_Estudio);

    // Getters
    int getId();
    std::string getTitulo();
    int getAnio();
    bool get_es_De_Estudio();


    // Setters
    void setTitulo(std::string nuevoTitulo);
    void setAnio(int nuevoAnio);
    void set_es_De_Estudio(bool nuevoValor);

    // Métodos para manejar canciones en el álbum
    void agregarCancion(int idCancion);
    bool eliminarCancion(int idCancion);
    void mostrarInfo();

    // Sobrecarga de operadores
    bool operator<(Album& otro) ;  // Para ordenar por ID
};



#endif //ALBUM_H
