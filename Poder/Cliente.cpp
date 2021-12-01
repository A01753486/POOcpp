#include <iostream>
#include <string>
#include "Cliente.h"
using namespace std;

Cliente::Cliente():perfil{"Desconocido", "Desconocido", "Desconocido"},carrito{"Pan",1000.00,10.00},monedero{"Ninguno", "12345", 0.00},{}
Cliente::Cliente(Perfil perf, Carrito car, Monedero mon):perfil{perf},carrito{car}, monedero{mon} {}

string Cliente::getPerfil(){return perfil.getNombre() + ", " + perfil.getTelefono() + ", " + perfil.getCiudad();}
string Cliente::getCarrito(){return carrito.getArticulos() + ", " + to_string(carrito.getLimite()) + ", " + to_string(carrito.getTotal());}
string Cliente::getMonedero(){return monedero.getMetodo() + ", " + monedero.getContra() + ", " + to_string(monedero.getCantidadDin());}
void Cliente::setPerfil(Perfil perf){perfil = perf;}
void Cliente::setMonedero(Monedero money){monedero = money;}
void Cliente::setCarrito(Carrito car){carrito = car;}

void Cliente::consultarDatos(){
    char opc; string novomet, co; double cant;
    cout << "   Procesando sus datos...Espere por favor.\n";
    cout << "   ***Su informacion es : \n";
    cout << "     - Nombre de usuario: " << perfil.getNombre() << endl;
    cout << "     - Telefono de usuario: " << perfil.getTelefono() << endl;
    cout << "     - Ciudad de usuario: " << perfil.getCiudad() << endl;
    cout << "     - Dinero en el monedero: " << monedero.getCantidadDin() << endl;
    cout << "     - Metodo de pago: " << monedero.getMetodo() << endl;
    perfil.guardar();
    cout << "     - ¿Desea agregar fondos a su monedero? (s/n) "; cin >> opc;
    if (opc == 's') {
      cout << "     - Ingrese la contraseña: "; cin >> co;
      if (co == monedero.getContra()) {
        cout << "     - Ingrese la cantidad de dinero que ingresara: "; cin >> cant;
        monedero.setCantidadDin(monedero.getCantidadDin() + cant);
        cout << "     - Se han aniadido " << cant << "$ al monedero exitosamente.\n\n";
      } else {
        cout << "Contrasenia incorrecta.\n";
      }
    }
    cout << "     - ¿Desea Cambiar el metodo de pago? (s/n) "; cin >> opc;
    if (opc == 's') {
      cout << "     - Ingrese el nuevo metodo: "; cin >> novomet;
      monedero.setMetodo(novomet);
      cout << "     - Se ha registrado su nuevo metodo de pago.\n\n";
    }
    cout << "     - ¿Desea agregar a un amigo? (s/n) "; cin >> opc;
    if (opc == 's') {
      perfil.agregarAmigos();
    }
    cout << "     - ¿Desea especificar su cumpleanios? (s/n) "; cin >> opc;
    if (opc == 's') {
      perfil.cum();
    }
    cout << "\n   ***La informacion del usuario ha sido guardada.***\n\n";
}
void Cliente::realizarCompra(){
    char opc;
    cout << "   Antes de iniciar su compra, ¿Desea vaciar su carrito? tiene un espacio disponible de: " << carrito.getLimite() - carrito.getTotal() << endl;
    cout << "   (s/n)"; cin >>  opc;
    if (opc == 's') {
      carrito.vaciar();
    }
    cout << "   Realizando compra...\n";
    carrito.agregarArticulos();
    cout << "   ¿Cuenta con un codigo de descuento? (s/n) "; cin >> opc;
    if (opc == 's') {
      carrito.codDescuento();
    }
    if (monedero.getCantidadDin() < carrito.getTotal()) {
      cout << "   Fondos insuficientes, no se pudo realizar la transaccion\n";
    } else {
      cout << "   Transaccion exitosa. Gracias por su preferencia, vuelva pronto.\n";
      monedero.setCantidadDin(monedero.getCantidadDin() - carrito.getTotal());
      carrito.setTotal(0.00);
    }
}
void Cliente::presentarQueja(){
    string queja;
    cout << "\n   Presente la queja en el siguiente espacio: "; cin >> queja;
    cout << "\n   Su queja ha sido regristrada, gracias por su evaluacion.\n";
}
