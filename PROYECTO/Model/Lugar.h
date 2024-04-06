//
// Created by nicol on 1/04/2024.
//

#ifndef PROYECTO_LUGAR_H
#define PROYECTO_LUGAR_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Lugar {

    private:
        vector<Lugar*> luga;
    public:
        //MODIFICADORA
        virtual void porcentaje() = 0;


};


#endif //PROYECTO_LUGAR_H
