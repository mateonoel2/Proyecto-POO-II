#include "Tablero.h"
#include "Dado.h"
#include "Jugador.h"

#ifndef PROYECTO_POO_II_JUEGO_H
#define PROYECTO_POO_II_JUEGO_H


class Juego {
private:
    int turno;
    int numeroJugadores;
public:
    Juego();
    void iniciarJuego();
    void siguienteTurno();
    void adicionarJugador(string nombre,int color);
    void validarFinJuego();
    void validarSalidaFicha();
    void validarCapturaFicha();
    void finalizarJuego();
};


#endif //PROYECTO_POO_II_JUEGO_H
