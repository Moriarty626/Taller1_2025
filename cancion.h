//
// Created by mauri on 24-03-2025.
//

#ifndef CANCION_H
#define CANCION_H

#include <iostream>
#include <string>

class cancion {
private:
    int id_cancion;      // Identificador único de la canción
    int album_id;        // ID del álbum al que pertenece
    std::string titulo;  // Nombre de la canción
    int reproducciones;  // Número de reproducciones en Spotify
    std::string duracion; // Duración en formato "MM:SS"

public:
    cancion(int id_Cancion, int id_album, std::string titulo, int reproducciones, std::string duracion);

    // Getters
    int getId();
    int getAlbumId();
    std::string getTitulo();
    int getReproducciones();
    std::string getDuracion();

    // Setters
    void setTitulo(std::string nuevoTitulo);
    void setReproducciones(int nuevasReproducciones);
    void setDuracion(std::string nuevaDuracion);

    void mostrarInfo();  // Muestra la información de la canción
    bool coincideTitulo(std::string& filtro);  // Verifica si el título coincide con una búsqueda

    // Sobrecarga de operadores
    bool operator<(cancion& otra);  // Para ordenar por reproducciones

};



#endif //CANCION_H
