#include "alumno.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
    //Alumno alumno1{};

    cout << "***Pruebas de clase Alumno ***\n" << endl;
    Alumno alumno1{};
    
    cout << "Nombre del alumno 2: " << alumno1.getNombre() << endl;
    cout << "Matricula del alumno 2: " << alumno1.getMatricula() << endl;
    cout << "La edad del alumno 2 es : " << alumno1.getEdad() << endl;
    cout << "La carrera del alumno 2 es : " << alumno1.getCarrera() << endl;
    cout << "\n"  << endl;
    cout << alumno1.print() + "\n" << endl;
//Alumno(string matricula , string nombre, int edad, string carrera);
    return 0;
}