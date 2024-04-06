//
// Created by nicol on 1/04/2024.
//

#ifndef PROYECTO_BOLETAS_H
#define PROYECTO_BOLETAS_H

#include <iostream>
#include <string>

using namespace std;

class Boletas {

    private:
        int aforo;
        int precioPrev;
        int precioGen;
        int boletasVend;
        int boletaPrev;
        int boletaGen;
        int dia;
        int mes;
        int anio;
        int cantAforo;
        int boletasCorte;
        int dineroPrev;
        int dineroGen;
        int dineroTot;

    public:
        //CONSTRUCTORAS
        Boletas();
        Boletas(int aforo, int precioPrev, int precioGen, int dia, int mes, int anio);

        //DESTRUCTOR
        ~Boletas();

        //MODIFICADORES
        void setAforo(int aforo);
        void setPrecioPrev(int precioPrev);
        void setPrecioGen(int precioGen);
        void setBoletaGen(int boletaGen);
        void setBoletaPrev(int boletaPrev);
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        void setCantAforo(int cantAforo);
        void setBoletasCorte(int boletasCorte);
        void setdineroPrev(int dineroPrev);
        void setdineroGen(int dineroGen);
        void setDineroTot(int dineroTot);

        //ANALIZADOR
        int getAforo();
        int getPrecioPrev();
        int getPrecioGen();
        int getBoletasVend();
        int cantdBoletasTot();
        int getBoletaPrev();
        int getBoletaGen();
        int getDia();
        int getMes();
        int getAnio();
        int getCantAforo();
        bool hayAforo();
        int getBoletasCorte();
        int getdineroPrev();
        int getdineroGen();
        int getDineroTot();

};


#endif //PROYECTO_BOLETAS_H
