#include <iostream>
#include <string>
#include "monedero.h"


using namespace std;

Monedero::Monedero():metodo{"Agregue un metodo"}, contra{"Lfl$m07r1"}, cantidadDin{0.00}{}
Monedero::Monedero(string met, string contras, double cant):metodo{met},contra{contras},cantidadDin{cant}{}

string Monedero::getMetodo(){return metodo;}
string Monedero::getContra(){return contra;}
double Monedero::getCantidadDin(){return cantidadDin;}

void Monedero::setMetodo(string met){metodo = met;}
void Monedero::setContra(string contras){contra = contras;}
void Monedero::setCantidadDin(double cant){cantidadDin = cant;}

void Monedero::llenar(){

}

void Monedero::compartir(){

}

void Monedero::reembolsar(){
    
}