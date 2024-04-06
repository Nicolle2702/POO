//
// Created by nicol on 2/04/2024.
//

#include "Bar.h"
#include <iostream>
#include <string>

using namespace std;

Bar::Bar() {
    bar= 0;
    come= 0;
}
Bar::Bar(int bar, int come) {
    this->bar= bar;
    this->come= come;
}
Bar::~Bar() {
}

void Bar::porcentaje() {

    Boletas boletas;
    int a= boletas.getDineroTot();

    bar= a*0.20;
    come= a*0.80;
}