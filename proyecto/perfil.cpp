#include "perfil.h"
#include <string>
#include <iostream>

using namespace std;

Perfil::Perfil(): nombre{"Desconocido"},telefono{"Desconocido"},ciudad{"Desconocida"}{}
Perfil::Perfil(string nomb,string tel, string city):nombre{nomb},telefono{tel},ciudad{city}{}

string Perfil::getNombre(){return nombre;}
string Perfil::getTelefono(){return telefono;}
string Perfil::getCiudad(){return ciudad;}
void Perfil::setNombre(string nomb){nombre = nomb;}
void Perfil::setTelefono(string tel){nombre = tel;}
void Perfil::setCiudad(string city){nombre = city;}

void Perfil::guardar(){
    cout << "\n***Tu informacion ha sido guardada.***\n";
}

void Perfil::agregarAmigos(){

}

void Perfil::cum(){

}

