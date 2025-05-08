//
// Created by alesso on 7/05/2025.
//

#include "ParImpar.h"

using namespace std;

float ParImpar::jugar(float gonzosApostar) {
    srand(time(nullptr));
    numeroCasino = 1 + rand() % 10;
    cout << "El numero generado es: " << numeroCasino << endl;
    return calcularResultado(gonzosApostar);
}

float ParImpar::calcularResultado(float gonzosApostar) {
    if (numeroCasino % 2 == 0) {
        cout << "¡Es PAR! Ganaste el doble." << endl;
        return gonzosApostar * 2;
    } else {
        cout << "Es IMPAR. Perdiste tu apuesta." << endl;
        return 0;
    }
}

void ParImpar::mostrarReglas() {
    cout << "\n Reglas de Par o Impar:\n";
    cout << "- Se genera un numero aleatorio entre 1 y 10.\n";
    cout << "- Si el numero es PAR, ganas el doble de lo apostado.\n";
    cout << "- Si es IMPAR, pierdes todo lo apostado.\n" << endl;
}

