#include "CasillaCasa.h"
#include "CasillaDestinoFinal.h"
#include "CasillaInicio.h"
#include "CasillaRecorrido.h"
#include "CasillaZonaSegura.h"

#ifndef PROYECTO_POO_II_CASILLA_H
#define PROYECTO_POO_II_CASILLA_H


class Casilla {
protected:
    int x;
    int y;
    bool disponible;
  //(**) Color;
public:
    virtual mostrar() = 0;
};


#endif //PROYECTO_POO_II_CASILLA_H
