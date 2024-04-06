//
// Created by nicol on 1/04/2024.
//

#ifndef PROYECTO_ARTISTAS_H
#define PROYECTO_ARTISTAS_H

#include <iostream>
#include <string>

using namespace std;

class Artistas {

    private:
        string nombreArt;
        int dia;
        int mes;
        int anio;
        int horaShow;
        int minShow;

    public:
        //CONSTRUCTORAS
        Artistas();
        Artistas(string nombreArt, int dia, int mes, int anio, int horaShow, int minShow);

        //DESTRUCTOR
        ~Artistas();

        //MODIFICADORES
        void setnombreArt(string nombreArt);
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        void setHoraShow(int horaShow);
        void setMinShow(int minShow);

        //ANALIZADOR
        string getNombreArt();
        int getDia();
        int getMes();
        int getAnio();
        int getHoraShow();
        int getMinShow();

};


#endif //PROYECTO_ARTISTAS_H
