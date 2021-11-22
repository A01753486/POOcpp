#include <string>
#ifndef APAGADOR_H
#define APAGADOR_H

class Apagador{
    private:
        bool encendido{0};
    public:
        Apagador();
        void encender();
        void apagar();
        bool isEncendido(); //get de encendido
        string print();

};//apagador

#endif