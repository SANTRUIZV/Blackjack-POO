#ifndef MANO_H
#define MANO_H

#include "Carta.h"
#include <vector>

// guarda las cartas que tiene un jugador o el crupier
class Mano {
private:
    std::vector<Carta> cartas;  // aqui se almacenan las cartas de la mano

public:
    // Agrega una carta a la mano
    void agregarCarta(Carta carta);

    // Calcula el total de puntos de la mano
    // Tiene en cuenta que el As puede valer 1 u 11
    int obtenerTotal() const;

    // Vaciar la mano 
    void limpiarMano();

    // Muestra todas las cartas de la mano por consola
    void mostrarMano() const;

    // Devuelve cuantas cartas hay en la mano
    int contarCartas() const;

    // Permite acceder a las cartas (solo lectura)
    const std::vector<Carta>& obtenerCartas() const;
};

#endif 
