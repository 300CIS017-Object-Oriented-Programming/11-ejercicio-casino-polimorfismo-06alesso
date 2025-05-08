//
// Created by alesso on 7/05/2025.
//


#define PARIMPAR_H
#ifndef CASINO_PARIMPAR_H


#include "Juego.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class ParImpar : public Juego {
public:
    float jugar(float gonzosApostar) override;
    float calcularResultado(float gonzosApostar) override;
    void mostrarReglas() override;
};

#endif

