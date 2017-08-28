//
//  main.cpp
//  ejercicio2
//
//  Created by Enrique Villa on 2/1/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//
/*
    Programa para comprar boletos de cine para diferente sala
    Algoritmo
 1. Pedir y leer los lugares y las películas de las salas
 2. Leer de cuál sala se quiere boleto y cúantos
 3. Imprimir cuántos boletos quedan
 */

#include <iostream>
using namespace std;

#include "SalaCine.h"

int main() {
    SalaCine CineMexS1, CineMexS2;
    int iBol, iLug, iSala;
    string sPel;
    CineMexS1.~SalaCine();
    CineMexS2.~SalaCine();
    cout << "¿Cuántos lugares tiene la sala 1?" << endl;
    cin >> iLug;
    cin.ignore();
    CineMexS1.setLugares(iLug);
    cout << "¿Qué película está disponible en la sala 1?" << endl;
    getline(cin, sPel);
    CineMexS1.setPelicula(sPel);
    cout << "¿Cuántos lugares tiene la sala 2?" << endl;
    cin >> iLug;
    cin.ignore();
    CineMexS2.setLugares(iLug);
    cout << "¿Qué película está disponible en la sala 2?" << endl;
    getline(cin, sPel);
    CineMexS2.setPelicula(sPel);
    do {
        cout << "0) Salir | 1) Sala 1 | 2) Sala 2" << endl;
        cin >> iSala;
        switch (iSala) {
            case 1:
                cout << "¿Cuántos boletos quieres?" << endl;
                cin >> iBol;
                if (CineMexS1.getLugares() >= iBol) {
                    CineMexS1.compraBoletos(iBol);
                    cout << "Quedan " << CineMexS1.getLugares() << " lugares para la película " << CineMexS1.getPelicula() << endl;
                } else {
                    cout << "No hay suficientes lugares para " << iBol << " boletos." << endl;
                    cout << "Quedan " << CineMexS1.getLugares() << " lugares para la película " << CineMexS1.getPelicula() << endl;
                }
                break;
            case 2:
                cout << "¿Cuántos boletos quieres?" << endl;
                cin >> iBol;
                if (CineMexS2.getLugares() >= iBol) {
                    CineMexS2.compraBoletos(iBol);
                    cout << "Quedan " << CineMexS2.getLugares() << " lugares para la película " << CineMexS2.getPelicula() << endl;
                } else {
                    cout << "No hay suficientes lugares para " << iBol << " boleto(s)." << endl;
                    cout << "Quedan " << CineMexS2.getLugares() << " lugares para la película " << CineMexS2.getPelicula() << endl;
                }
                break;
        }
    } while (iSala != 0);
    return 0;
}
