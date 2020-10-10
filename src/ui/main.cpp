#include <iostream>
#include "../utilitario/Validar.h"
#include "../tl/Gestor.h"
using namespace std;

using namespace std;
void menu();
void procesarMenu(int &, bool &);
void fun();
void moreFun();
void tres();
int ingresarNum(string);
Validar validar;
Gestor gestor;

int main() {
    menu();
    return 0;
}
void menu() {
    bool salir;
    string valor;
    int opcion = 0;
    do {
        cout << "\nMenú Arbol Binario Balanceado AVL\n\nElija una opción\n" <<
             "01 fun\n" <<
             "02 moreFun\n" <<
             "03 tres"
             "22 Salir\n";
        cin >> valor;
        opcion = validar.ingresarInt(valor);
        procesarMenu(opcion, salir);
    } while (!salir);
}
void procesarMenu(int & pOpcion, bool & salir) {
    switch (pOpcion) {
        case 1:
            fun();
            break;
        case 2:
            moreFun();
            break;
        case 3:
            tres();
            break;
//        case 4:
////            buscarMinimo();
//            break;
//        case 5:
////            buscarMaximo();
//            break;
//        case 6:
////            esHoja();
//            break;
//        case 7:
////            nivel();
//            break;
//        case 8:
////            altura();
//            break;
//        case 9:
////            numHojas();
//            break;
//        case 10:
////            camino();
//            break;
//        case 11:
////            preOrden();
//            break;
//        case 12:
////            postOrden();
//            break;
//        case 13:
////            inOrden();
//            break;
//        case 14:
////            eliminarElemIzq();
//            break;
//        case 15:
////            eliminarElemDer();
//            break;
//        case 16:
////            esLleno();
//            break;
//        case 17:
////            esCompleto();
//            break;
//        case 18:
////            insertarEnArbolB();
//            break;
//        case 19:
////            sonArbolesIguales();
//            break;
//        case 20:
////            sonArbolesSemejantes();
//            break;
//        case 21:
////            sonArbolesIsomorfos();
//            break;
        case 22:
            salir = true;
            break;
        default:
            cout << "Opción inválida\n";
    }
}
int ingresarNum(string msg){
    int num;
    string valor;
    do {
        cout << msg << endl;
        cin >> valor;
        num = validar.ingresarInt(valor);
        if (num == -1){
            cout << "Ingrese un números\n";
        }
    } while (num == -1);
    return num;
}
void fun(){
    string msg = "Ingrese un números\n";
    int num = ingresarNum(msg);
    gestor.fun(num);
}
void moreFun(){
    string msg = "Ingrese un números\n";
    int num = ingresarNum(msg);
    gestor.moreFun(num);
}
void tres(){
    string msg = "Ingrese un números\n";
    int num = ingresarNum(msg);
    gestor.tres(num);
}