//
// Created by nicol on 2/04/2024.
//

#ifndef PROYECTO_TEATRO_H
#define PROYECTO_TEATRO_H
#include <iostream>
#include <string>
#include "Lugar.h"
#include <vector>
using namespace std;

class Teatro: public  Lugar{

    private:
        int alquiler;
        double boleTeatro;
        double come;

    public:
        // CONSTRUCTORAS
        Teatro();
        Teatro(int alquiler, int boleTeatro, int come);

        //DESTRUCTORA
        ~Teatro();

        //MODIFICADORA
        void porcentaje() override;

};


#endif //PROYECTO_TEATRO_H
