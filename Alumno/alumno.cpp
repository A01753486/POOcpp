#include <string>
#include "alumno.h"
using namespace std;

Alumno::Alumno(string matricula , string nombre, int edad, string carrera):matricula{matricula}, nombre{nombre}, edad{edad}, carrera{carrera}{}

string Alumno::getMatricula(){return matricula;}
string Alumno::getNombre(){return  nombre;}
int Alumno::getEdad(){return edad;}
string Alumno::getCarrera(){return carrera;}
void Alumno::setMatricula(string matricula){matricula = matricula;}
void Alumno::setNombre(string nombre){nombre = nombre;}
void Alumno::setEdad(int edad){nombre = nombre;}
void Alumno::setCarrera(string carrera){carrera = carrera;}