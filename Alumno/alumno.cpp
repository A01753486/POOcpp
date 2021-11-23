#include <string>
#include "alumno.h"
using namespace std;

Alumno::Alumno(string matricula , string nombre, int edad, string carrera):matricula{matricula}, nombre{nombre}, edad{edad}, carrera{carrera}{}
Alumno::Alumno(): matricula{"A01753486"}, nombre {"Diego"}, edad{18},carrera{"IRS"}{};

string Alumno::getMatricula(){return matricula;}
string Alumno::getNombre(){return  nombre;}
int Alumno::getEdad(){return edad + 1;}
string Alumno::getCarrera(){return carrera;}
void Alumno::setMatricula(string matricula){matricula = matricula;}
void Alumno::setNombre(string n){nombre = n;}
void Alumno::setEdad(int edad){edad = edad;}
void Alumno::setCarrera(string carrera){carrera = carrera;}
string Alumno::print(){
    return "Alumno (" + nombre + "," + matricula + "," + to_string(edad) + "," + carrera + ")";
    }
