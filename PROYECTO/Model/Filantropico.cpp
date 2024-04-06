//
// Created by nicol on 2/04/2024.
//

#include "Filantropico.h"
#include <iostream>
#include <string>
#include "Boletas.h"

using namespace std;

Filantropico::Filantropico() {
    ganancia=0;
}
Filantropico::Filantropico(int ganancia) {
    this->ganancia= ganancia;
}

Filantropico::~Filantropico() {
}

void Filantropico::porcentaje() {
    Boletas boletas;
    int a= boletas.getDineroTot();
    ganancia= a*0;

}
