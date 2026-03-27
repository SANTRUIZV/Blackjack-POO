#ifndef CARTA_H
#define CARTA_H

#include <string>

// Usamos enum class para definir los palos de la baraja
enum class Palo {
    Corazones,
    Diamantes,
    Treboles,
    Picas
};

// Usamos enum class para los valores de cada carta (del As al Rey)
enum class Valor {
    As = 1,
    Dos, Tres, Cuatro, Cinco, Seis, Siete, Ocho, Nueve, Diez,
    Jota, Reina, Rey
};

// representa una carta individual de la baraja
class Carta {
private:
    Valor valor;  // El valor de la carta (As, 2, 3... Rey)
    Palo palo;    // El palo de la carta (Corazones, Diamantes, etc.)

public:
    // recibe el palo y el valor de la carta
    Carta(Palo palo, Valor valor);

    // Devuelve el valor numerico de la carta para el juego
    // Las figuras (J, Q, K) valen 10, el As se devuelve como 11
    int obtenerValor() const;

    // Muestra la carta en consola (ej: "As de Corazones")
    void mostrarCarta() const;
};

#endif
