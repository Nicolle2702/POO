//
// Created by nicol on 2/04/2024.
//

#ifndef PROYECTO_USUARIO_H
#define PROYECTO_USUARIO_H

#include <iostream>
#include <string>

using namespace std;


class Usuario {

    private:
        string nombre;
        int edad;
        string correo;
        string residencia;
        int dia;
        int mes;
        int anio;
        int cantBols;
        int idComp;
        int tipoPago;

    public:
        //CONSTRUCTORES
        Usuario();
        Usuario(string nombre, int edad, string correo, string residencia, int dia, int mes, int anio, int cantBols, int idComp,int tipoPago);

        //DESTRUCTOR
        ~Usuario();

        //MODIFICADORES
        void setNombre(string nombre);
        void setEdad(int edad);
        void setCorreo(string correo);
        void setResidencia(string residencia);
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        void setCantBols(int cantBols);
        void setIdComp(int idComp);
        void setTipoPago(int tipoPago);

        //ANALIZADORAS
        string getNombre();
        int getEdad();
        string getCorreo();
        string getResidencia();
        int getDia();
        int getMes();
        int getAnio();
        int getCantBols();
        int getIdComp();
        int getTipoPago();

};


#endif //PROYECTO_USUARIO_H
