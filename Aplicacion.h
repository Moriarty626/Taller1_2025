#ifndef CANCION_H
#define CANCION_H

class Cancion {
private:
    int id_cancion;
    int album_id;
    std::string titulo;
    int reproducciones;
    std::string duracion;

public:
    // Constructor por defecto
    Cancion();

    // Constructor con parámetros
    Cancion(int id_Cancion, int id_album, std::string titulo, int reproducciones, std::string duracion);

    // Destructor
    ~Cancion();

    // Métodos getters
    int getId() const;
    int getAlbumId() const;
    std::string getTitulo() const;
    int getReproducciones() const;
    std::string getDuracion() const;

    // Sobrecarga de operadores
    bool operator<(const Cancion &otra) const;
};

#endif // CANCION_H
