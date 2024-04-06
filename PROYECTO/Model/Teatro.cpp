//
// Created by nicol on 2/04/2024.
//

#include "Teatro.h"
#include <iostream>
#include <string>
#include "Boletas.h"
using namespace std;

Teatro::Teatro() {
    alquiler=0;
    boleTeatro=0;
    come=0;
}
Teatro::Teatro(int alquiler, int boleTeatro, int come) {
    this->alquiler= alquiler;
    this->boleTeatro= boleTeatro;
    this->come= come;
}

Teatro::~Teatro() {
}

void Teatro::porcentaje() {
    Boletas boletas;
    int a= boletas.getDineroTot();
    boleTeatro= a*0.07;
    come=a*0.93;
}