//
// Created by nicol on 2/04/2024.
//

#ifndef PROYECTO_FILANTROPICO_H
#define PROYECTO_FILANTROPICO_H

#include "Lugar.h"
#include <iostream>
#include <string>

using namespace std;

class Filantropico:public Lugar {
    private:
        double ganancia;
    public:
        // CONSTRUCTORAS
        Filantropico();
        Filantropico(int ganancia);
        //DESTRUCTORA
        ~Filantropico();

        //MODIFICADORA
        void porcentaje() override;

};


#endif //PROYECTO_FILANTROPICO_H
