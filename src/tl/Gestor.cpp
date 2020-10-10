//
// Created by Mario Martinez on 10/10/20.
//

#include "Gestor.h"

void Gestor::fun(int n) {
    if (n > 2){
        fun(n - 1);
        fun(n - 2);
        fun(n - 3);
    }
    cout << n << endl;
}

void Gestor::moreFun(int n) {
    cout << n << endl;
    if (n > 2){
        moreFun(n - 1);
        moreFun(n - 2);
        moreFun(n - 3);
    }
}

void Gestor::tres(int n) {
    if (n == 0){
        return;
    } else {

    }
}

