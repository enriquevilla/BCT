//
//  main.cpp
//  31.03.17
//
//  Created by Enrique Villa on 3/31/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Animal.h"

int main() {
    Animal* listaAnimal[3];
    listaAnimal[0] = new Gato("Silvestre", 1947);
    listaAnimal[1] = new Perro("Fido", 2000);
    listaAnimal[2] = new Gato("Tom", 1940);
    for (int iCont = 0; iCont < 3; iCont++) {
        listaAnimal[iCont]->habla();
        listaAnimal[iCont]->muestra();
    }
    return 0;
}
