#ifndef CRUPIER_H
#define CRUPIER_H

#include "Participante.h"

// Clase Crupier hereda de Participante
class Crupier : public Participante {
public:
    // el crupier siempre se llama "Crupier"
    Crupier();

    // Muestra solo la primera carta (la segunda queda oculta al inicio)
    void mostrarPrimeraCarta() const;

    // El crupier juega automaticamente: pide cartas mientras tenga menos de 17
    void jugarTurno(Mazo& mazo);
};

#endif
