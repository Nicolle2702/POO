//
// Created by nicol on 1/04/2024.
//

#include "Eventos.h"
#include <iostream>
#include <string>

using namespace std;

Eventos::Eventos() {
    this->nombre=  " ";
    this->dia= 0;
    this->mes= 0;
    this->anio= 0;
    this->horaInicio= 0;
    this->minInicio= 0;
    this->dinero= 0;
}
Eventos::Eventos(string nombre, int dia, int mes, int anio, int horaInicio, int minInicio) {
    this->nombre= nombre;
    this->dia= dia;
    this->mes= mes;
    this->anio= anio;
    this->horaInicio= horaInicio;
    this->minInicio= minInicio;
    this->dinero= 0;
}

Eventos::~Eventos() {
}

void Eventos::ventaBoleta(string nombre, int edad, string correo, string residencia, int dia, int mes, int anio, int cantBols, int idComp,int tipoPago) {
    Usuario* tmp = new Usuario(nombre, edad, correo, residencia, dia, mes, anio, cantBols, idComp,tipoPago);
    usu[idComp] = tmp;

    if(estado == "por realizar" || estado == "aplazado") {
        if (boleta->hayAforo()) {
            if (anio > boleta->getAnio()) {
                boleta->setBoletaGen(boleta->getBoletaGen() + cantBols);
                dinero += boleta->getPrecioGen() * cantBols;
            } else if (mes > boleta->getMes()) {
                boleta->setBoletaGen(boleta->getBoletaGen() + cantBols);
                dinero += boleta->getPrecioGen() * cantBols;
            } else if (dia > boleta->getDia()) {
                boleta->setBoletaGen(boleta->getBoletaGen() + cantBols);
                dinero += boleta->getPrecioGen() * cantBols;
            } else {
                boleta->setBoletaPrev(boleta->getBoletaPrev() + cantBols);
                dinero += boleta->getPrecioPrev() * cantBols;
            }
        }
    }
}

void Eventos::bolCorte(string nombre, int edad, string correo, string residencia, int dia, int mes, int anio, int cantBols, int idComp,int tipoPago) {
    Usuario* tmp = new Usuario(nombre, edad, correo, residencia, dia, mes, anio, cantBols, idComp,tipoPago);
    usu[idComp] = tmp;

    if(estado == "por realizar" || estado == "aplazado") {
        if (boleta->hayAforo()) {
            boleta->setBoletasCorte(boleta->getBoletasCorte() + cantBols);
        }
    }
}

void Eventos::anadirEvento() {
    luga [1]=new Teatro();
    luga [2]=new Bar();
    luga [3]=new Filantropico();
}


Lugar* Eventos::ubicacion(int lugar){
    auto it = luga.find(lugar);
    if (it != luga.end()) {
        return it->second;
    }
}

void Eventos::setnombre(string nombre){
    this->nombre = nombre;
}

void Eventos::setEstado(string estado) {
    this->estado = estado;
}

void Eventos::setDia(int dia) {
    this->dia= dia;
}
void Eventos::setMes(int mes) {
    this->mes= mes;
}
void Eventos::setAnio(int anio) {
    this->anio= anio;
}

void Eventos::setHoraInicio(int horaInicio) {
    this->horaInicio= horaInicio;
}

void Eventos::setMinInicio(int minInicio) {
    this->minInicio= minInicio;
}


void Eventos::anadirArti(string nombreArt, int dia, int mes, int anio, int horaShow, int minShow) {
    Artistas* tmp = new Artistas(nombreArt, dia, mes, anio, horaShow, minShow);
    this->arti.push_back(tmp);
}

void Eventos::boletas(int aforo, int precioPrev, int precioGen, int dia, int mes, int anio) {
    Boletas* tmp = new Boletas(aforo, precioPrev, precioGen, dia, mes, anio);
    boleta = tmp;
}

string Eventos::getnombre(){
    return nombre;
}

string Eventos::getEstado() {
    return estado;
}

int Eventos::getDia() {
    return dia;
}
int Eventos::getMes() {
    return mes;
}
int Eventos::getAnio() {
    return anio;
}
int Artistas::getHoraShow() {
    return horaShow;
}

int Artistas::getMinShow() {
    return minShow;
}


//REPORTES FINANCIEROS

string Eventos::reporteVenta(){

}

string Eventos::reporteFinan(){
    cout<<"Usted ha recibido" << boleta->getDineroTot()<< " Pesos de todas las boletas"<<endl;
    cout<<"Se distribuye el dinero total de la siguiente forma: "<<endl;
    cout<<"BOLETAS GENERALES: "<<endl<< boleta->getdineroGen()<<" Pesos"<<endl;
    cout<<"BOLETEAS PREVENTA: "<<endl<< boleta->getdineroPrev()<<" Pesos"<<endl;
}

string Eventos::reporteArti(){



}






