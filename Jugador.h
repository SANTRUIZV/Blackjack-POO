#ifndef JUGADOR_H
#define JUGADOR_H

#include "Participante.h"

// Clase Jugador hereda de Participante
// El jugador tiene saldo (dinero) y puede hacer apuestas
class Jugador : public Participante {
private:
    double saldo;          // Dinero disponible del jugador
    double apuestaActual;  // Cuanto aposto en la ronda actual

public:
    // recibe nombre y saldo inicial
    Jugador(std::string nombre, double saldo);

    // El jugador hace una apuesta con la cantidad indicada
    void hacerApuesta(double cantidad);

    // Se llama cuando el jugador gana (recibe el doble de su apuesta)
    void ganar();

    // Se llama cuando el jugador pierde (ya se le resto al apostar)
    void perder();

    // Se llama cuando hay empate (se le devuelve su apuesta)
    void empatar();

    // Getters utiles
    double obtenerSaldo() const;
    double obtenerApuesta() const;
};

#endif
