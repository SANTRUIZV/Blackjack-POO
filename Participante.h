#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H

#include "Mano.h"
#include "Mazo.h"
#include <string>

// De esta heredan Jugador y Crupier
// Usamos protected para que las clases hijas puedan acceder a nombre y mano
class Participante {
protected:
    std::string nombre;  // Nombre del participante
    Mano mano;           // La mano de cartas del participante

public:
    // recibe el nombre del participante
    Participante(std::string nombre);

    // Destructor virtual: necesario cuando usamos herencia
    virtual ~Participante();

    // Verifica si el participante se paso de 21
    bool sePaso() const;

    // Pide una carta del mazo y la agrega a su mano
    void pedirCarta(Mazo& mazo);

    // Muestra el nombre y las cartas del participante
    void mostrarCartas() const;

    // Devuelve el nombre del participante
    std::string obtenerNombre() const;

    // Devuelve el total de puntos de la mano
    int obtenerTotal() const;

    // Limpia la mano para una nueva ronda
    void limpiarMano();
};

#endif 
