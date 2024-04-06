//
// Created by nicol on 2/04/2024.
//

#include "Usuario.h"


Usuario::Usuario() {
    this->nombre = " ";
    this->edad = 0;
    this->correo = " ";
    this->residencia = " ";
    this->dia = 0;
    this->mes = 0;
    this->anio = 0;
    this->cantBols =0;
}

Usuario::Usuario(string nombre, int edad, string correo, string residencia, int dia, int mes, int anio, int cantBols, int idComp,int tipoPago) {
    this->nombre = nombre;
    this->edad = edad;
    this->correo = correo;
    this->residencia = residencia;
    this->dia= dia;
    this->mes= mes;
    this->anio= anio;
    this->cantBols = cantBols;
}

Usuario::~Usuario() {
}

void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Usuario::setEdad(int edad) {
    this->edad = edad;
}

void Usuario::setCorreo(string correo) {
    this->correo = correo;
}

void Usuario::setResidencia(string residencia) {
    this->residencia = residencia;
}

void Usuario::setDia(int dia) {
    this->dia= dia;
}
void Usuario::setMes(int mes) {
    this->mes= mes;
}
void Usuario::setAnio(int anio) {
    this->anio= anio;
}

void Usuario::setCantBols(int cantBols) {
    this->cantBols = cantBols;
}

void Usuario::setIdComp(int idComp) {
    this->idComp = idComp;
}

void Usuario::setTipoPago(int tipoPago){
    this->tipoPago= tipoPago;
}

string Usuario::getNombre() {
    return nombre;
}

int Usuario::getEdad() {
    return edad;
}

string Usuario::getCorreo() {
    return correo;
}

string Usuario::getResidencia() {
    return residencia;
}

int Usuario::getDia() {
    return dia;
}
int Usuario::getMes() {
    return mes;
}
int Usuario::getAnio() {
    return anio;
}

int Usuario::getCantBols() {
    return cantBols;
}

int Usuario::getIdComp() {
    return idComp;
}

int Usuario::getTipoPago(){
    return tipoPago;
}