#include <string>
#ifndef MONEDERO_H
#define MONEDERO_H

using namespace std;

class Monedero{

    private:
        string metodo();
        string contra();
        double cantidadDin();

    public:
        Monedero();
        string getMetodo();
        string getContra();
        double getCantidadDin();
        void setMetodo();
        void setContra();
        void setCantidadDin();
        void llenar();
        void compartir();
        void reembolsar();
};

#endif