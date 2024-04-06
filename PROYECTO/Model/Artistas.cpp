//
// Created by nicol on 1/04/2024.
//

#include "Artistas.h"
#include <iostream>
#include <string>

using namespace std;

Artistas::Artistas(){
    nombreArt=" ";
    dia= 0;
    mes= 0;
    anio= 0;
    horaShow= 0;
    minShow= 0;

}
Artistas::Artistas(string nombreArt, int dia, int mes, int anio, int horaShow, int minShow) {
    this->nombreArt= nombreArt;
    this->dia= dia;
    this->mes= mes;
    this->anio= anio;
    this->horaShow= horaShow;
    this->minShow= minShow;
}

Artistas::~Artistas() {
}

string Artistas::getNombreArt() {
    return nombreArt;
}

int Artistas::getDia() {
    return dia;
}

int Artistas::getMes() {
    return mes;
}

int Artistas::getAnio() {
    return anio;
}

int Artistas::getHoraShow() {
    return horaShow;
}

int Artistas::getMinShow() {
    return minShow;
}

void Artistas::setnombreArt(string nombreArt) {
    this->nombreArt= nombreArt;
}

void Artistas::setDia(int dia) {
    this->dia= dia;
}

void Artistas::setMes(int mes) {
    this->mes= mes;
}

void Artistas::setAnio(int anio) {
    this->anio= anio;
}

void Artistas::setHoraShow(int horaShow) {
    this->horaShow= horaShow;
}

void Artistas::setMinShow(int minShow) {
    this->minShow= minShow;
}


