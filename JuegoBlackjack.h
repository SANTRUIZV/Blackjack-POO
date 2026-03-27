#ifndef JUEGOBLACKJACK_H
#define JUEGOBLACKJACK_H

#include "Mazo.h"
#include "Crupier.h"
#include "Jugador.h"
#include <vector>

// Clase JuegoBlackjack: controla toda la logica del juego
// Contiene el mazo, el crupier y un vector de jugadores
class JuegoBlackjack {
private:
    Mazo mazo;                       // El mazo de cartas
    Crupier crupier;                 // El crupier del juego
    std::vector<Jugador> jugadores;  // Los jugadores de la mesa

public:
    //recibe cuantos jugadores van a jugar
    JuegoBlackjack(int numeroDeJugadores);

    //inicializa el mazo, baraja y reparte 2 cartas a cada uno
    void prepararMesa();

    // Ejecuta una ronda completa del juego
    void jugarRonda();

    // Compara las manos y resuelve quien gano, perdio o empato
    void resolverApuestas();
};

#endif