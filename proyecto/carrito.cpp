#include <string>
#include <iostream>
#include "carrito.h"

using namespace std;

Carrito::Carrito():articulos{"Vacio"},limite{10000},total{0.00}{}
Carrito::Carrito(string art, int lim, double tot):articulos{art},limite{lim},total{tot}{}

string Carrito::getArticulos(){return articulos;}
int Carrito::getLimite(){return limite;}
double Carrito::getTotal(){return total;}

void Carrito::setArticulos(string art){articulos = articulos + "," + art;}
void Carrito::setLimite(int lim){limite = lim;}
void Carrito::setTotal(double tot){total = tot;}

bool Carrito::codDescuento(){

}

void Carrito::agregarArticulos(){

}

void Carrito::comprar(){
    cout << "Gracias por su compra, por favor regrese a comprar con nosotros.\n";
}