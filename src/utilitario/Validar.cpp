//
// Created by Mario Martinez on 10/10/20.
//

#include "Validar.h"

int Validar::ingresarInt(string pValor) {
    try {
        return stoi(pValor);
    } catch (exception e) {
//        cout << e.what();
        return -1;
    }
}