//
// Created by nicol on 1/04/2024.
//

#ifndef PROYECTO_EVENTOS_H
#define PROYECTO_EVENTOS_H

#include <iostream>
#include <string>
#include <vector>
#include "Artistas.h"
#include "Lugar.h"
#include "Boletas.h"
#include "Bar.h"
#include "Filantropico.h"
#include "Teatro.h"
#include "unordered_map"
#include "Usuario.h"

using namespace std;


class Eventos {

    private:
        string nombre;
        int dinero;
        string estado;
        int horaInicio;
        int minInicio;
        int dia;
        int mes;
        int anio;
        vector<Artistas*> arti;
        unordered_map<int,Usuario*> usu;
        unordered_map<int,Lugar*> luga;
        Boletas* boleta;

    public:
        //CONSTRUCTORES
        Eventos();
        Eventos(string nombre, int dia, int mes, int anio, int horaInicio, int minInicio);

        //DESTRUCTOR
        ~Eventos();

        //MODIFICADORES
        void ventaBoleta(string nombre, int edad, string correo, string residencia, int dia, int mes, int anio, int cantBols, int idComp,int tipoPago);
        Lugar* ubicacion(int luga);
        void setnombre(string nombre);
        void setEstado(string estado);
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        void setHoraInicio(int horaInicio);
        void setMinInicio(int minInicio);
        void anadirEvento();
        void anadirArti(string nombreArt, int dia, int mes, int anio, int horaShow, int minShow);
        void boletas(int aforo, int precioPrev, int precioGen, int dia, int mes, int anio);
        void bolCorte(string nombre, int edad, string correo, string residencia, int dia, int mes, int anio, int cantBols, int idComp,int tipoPago);

        //ANALIZADORAS
        string getnombre();
        string getEstado();
        int getDia();
        int getMes();
        int getAnio();
        int getHoraInicio();
        int getMinInicio();
        string mostrarInfoArti();

        //REPORTES FINANCIEROS
        string reporteVenta();
        string reporteFinan();
        string reporteUsu();
        string reporteArti();






};


#endif //PROYECTO_EVENTOS_H
