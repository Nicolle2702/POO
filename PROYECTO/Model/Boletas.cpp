//
// Created by nicol on 1/04/2024.
//

#include "Boletas.h"
#include <iostream>
#include <string>

using namespace std;

Boletas::Boletas() {
    this->aforo= 0;
    this->precioPrev= 0;
    this->precioGen= 0;
    this->boletasVend= 0;
    this->boletaGen= 0;
    this->boletaPrev= 0;
    this->dia= 0;
    this->mes= 0;
    this->anio= 0;
    this->cantAforo= 0;
    this->dineroPrev= 0;
    this->dineroGen= 0;
    this->dineroTot= 0;
}
Boletas::Boletas(int aforo, int precioPrev, int precioGen, int dia, int mes, int anio) {
    this->aforo= aforo;
    this->precioPrev= precioPrev;
    this->precioGen= precioGen;
    this->boletasVend= 0;
    this->boletaGen= 0;
    this->boletaPrev= 0;
    this->dia= dia;
    this->mes= mes;
    this->anio= anio;
    this->cantAforo= 0;
    this->dineroPrev= 0;
    this->dineroGen= 0;
    this->dineroTot= 0;
}


Boletas::~Boletas() {
}


void Boletas::setAforo(int aforo){
    this->aforo= aforo;
}
void Boletas::setPrecioPrev(int precioPrev){
    this->precioPrev= precioPrev;
}

void Boletas::setPrecioGen(int precioGen) {
    this->precioGen= precioGen;
}

void Boletas::setBoletaGen(int boletaGen){
    this->boletaGen= boletaGen;
}
void Boletas::setBoletaPrev(int boletaPrev){
    this->boletaPrev= boletaPrev;
}
void Boletas::setDia(int dia) {
    this->dia= dia;
}
void Boletas::setMes(int mes) {
    this->mes= mes;
}
void Boletas::setAnio(int anio) {
    this->anio= anio;
}
void Boletas::setCantAforo(int cantAforo) {
    this->cantAforo= cantAforo;
}
void Boletas::setBoletasCorte(int boletasCorte) {
    this->boletasCorte= boletasCorte;
}
void Boletas::setdineroPrev(int dineroPrev) {
    this->dineroPrev= dineroPrev;
}
void Boletas::setdineroGen(int dineroGen) {
    this->dineroGen= dineroGen;
}
void Boletas::setDineroTot(int dineroTot){
    this->dineroTot= dineroTot;
}


int Boletas::getAforo(){
    return aforo;
}
int Boletas::getPrecioPrev(){
    return precioPrev;
}
int Boletas::getPrecioGen() {
    return precioGen;
}
int Boletas::getBoletasVend(){
    return boletasVend;
}
int Boletas::getBoletaPrev(){
    return boletasVend;
}
int Boletas::getBoletaGen(){
    return boletasVend;
}
int Boletas::cantdBoletasTot(){
    boletasVend= boletaPrev+boletaGen;
    return boletasVend;
}
int Boletas::getDia() {
    return dia;
}
int Boletas::getMes() {
    return mes;
}
int Boletas::getAnio() {
    return anio;
}
int Boletas::getCantAforo() {
    return cantAforo;
}
bool Boletas::hayAforo() {
    bool ans = false;

    if(cantAforo < aforo){
        ans = true;
    }

    return ans;
}
int Boletas::getBoletasCorte() {
    return boletasCorte;
}
int Boletas::getdineroPrev() {
    return dineroPrev;
}
int Boletas::getdineroGen() {
    return dineroGen;
}
int Boletas::getDineroTot(){
    dineroTot= dineroPrev+dineroGen;
    return dineroTot;
}

