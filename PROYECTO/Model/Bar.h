//
// Created by nicol on 2/04/2024.
//

#ifndef PROYECTO_BAR_H
#define PROYECTO_BAR_H
#include <iostream>
#include <string>
#include "Lugar.h"
#include "Boletas.h"

using namespace std;

class Bar: public Lugar{
    private:
        double bar;
        double come;
    public:
        // CONSTRUCTORAS
        Boletas* bole;
        Bar();
        Bar(int bar,int come);

        //DESTRUCTORA
        ~Bar();

        //MODIFICADORA
        void porcentaje() override;

};


#endif //PROYECTO_BAR_H
