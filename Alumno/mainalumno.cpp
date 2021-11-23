#include "alumno.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
    //Alumno alumno1{};

    string matricula2,nombre2, carrera2;
    int edad2;

    cout << "***Pruebas de clase Alumno ***\n" << endl;
    
    cout << "Dame la matricula del alumno 1: "; cin >> matricula2;
    cout << "Dame el nombre del alumno 1: "; cin >> nombre2;
    cout << "Dame la edad del alumno 1: "; cin >> edad2;
    cout << "Dame las iniciales de la carrera del alumno 1: "; cin >> carrera2;
    Alumno alumno2{matricula2,nombre2,edad2,carrera2};
    cout << alumno2.print() + "\n" << endl;
    cout << "Prueba de set en alumno 1: "; alumno2.setNombre("Hector"); 
    cout << "\n";
    cout << "Nombre cambiado a Hector con un set: " << alumno2.getNombre() << endl;
    cout << "\n";
    Alumno alumno1{};
    
    cout << "Nombre del alumno 2: " << alumno1.getNombre() << endl;
    cout << "Matricula del alumno 2: " << alumno1.getMatricula() << endl;
    cout << "La edad del alumno 2 es : " << alumno1.getEdad() << endl;
    cout << "La carrera del alumno 2 es : " << alumno1.getCarrera() << endl;
    cout << "\n"  << endl;
    cout << "***Prueba del print del alumno 1: ***";
    cout << alumno1.print() + "\n" << endl;


    

//Alumno(string matricula , string nombre, int edad, string carrera);
    return 0;
}