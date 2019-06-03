#include "Ficha.h"
#include "Recorrido.h"

#ifndef PROYECTO_POO_II_JUGADOR_H
#define PROYECTO_POO_II_JUGADOR_H
#include <string>
#include <iostream>
using namespace std;

class Jugador {
private:
    string nombre;
    int color;
public:
    Jugador(string nombre,int color):nombre(nombre),color(color){};
    void jugar(Ficha ficha, int movimientos);
    Ficha* seleccionarFichaEnJuego();
    ~Jugador();

};


#endif //PROYECTO_POO_II_JUGADOR_H
