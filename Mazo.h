#ifndef MAZO_H
#define MAZO_H

#include "Carta.h"
#include <vector>

// representa la baraja completa de 52 cartas
class Mazo {
private:
    std::vector<Carta> cartas;  // Aqui guardamos todas las cartas del mazo

public:
    // Crea las 52 cartas (4 palos x 13 valores)
    void inicializar();

    // Baraja las cartas aleatoriamente usando la libreria algorithm
    void barajar();

    // Saca la carta de arriba del mazo y la devuelve
    Carta repartir();

    // Dice cuantas cartas quedan en el mazo
    int obtenerCartasRestantes() const;
};

#endif 
