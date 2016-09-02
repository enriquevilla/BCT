//
//  main.cpp
//  ajedrez
//
//  Created by Enrique Villa on 8/31/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
/*
    Programa para sacar los posibles movimientos del caballo en ajedrez
 
    Algoritmo
    1. Pedir posicion al usuario
    2. Calcular posiciones
    3. Imprimir todas las posiciones posibles
 
    Casos de prueba
    Muchos
 
 */

#include <iostream>
using namespace std;

int main() {
    int iX;
    int iY;
    cout << "Teclee los valores de posición del caballo (# #):" << endl;
    cin >> iX >> iY;
    cout << "MOVES:" << endl;
    if (iX + 2 <= 8 && iY + 2 <= 8 && iX - 2 >= 1 && iY - 2 >= 1) {
        cout << iX - 2 << " " << iY - 1 << endl;
        cout << iX - 2 << " " << iY + 1 << endl;
        cout << iX - 1 << " " << iY + 2 << endl;
        cout << iX + 1 << " " << iY + 2 << endl;
        cout << iX + 2 << " " << iY + 1 << endl;
        cout << iX + 2 << " " << iY - 1 << endl;
        cout << iX + 1 << " " << iY - 2 << endl;
        cout << iX - 1 << " " << iY - 2 << endl;
        } else {
            if (iX + 1 == 9 && iY + 1 == 9) {
                cout << iX - 1 << " " << iY - 2 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
        } else {
            if (iX + 2 == 9 && iY + 2 == 9) {
                cout << iX + 1 << " " << iY - 2 << endl;
                cout << iX - 1 << " " << iY - 2 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iX + 2 == 9 && iY + 1 == 9) {
                cout << iX + 1 << " " << iY - 2 << endl;
                cout << iX - 1 << " " << iY - 2 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
        } else {
            if (iX + 1 == 9 && iY + 2 == 9) {
                cout << iX - 1 << " " << iY - 2 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iX + 2 == 9 && iY > 1 && iY < 8) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX + 1 << " " << iY - 2 << endl;
                cout << iX - 1 << " " << iY - 2 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iX + 1 == 9 && iY > 1 && iY < 8) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX - 1 << " " << iY - 2 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iX + 1 == 9 && iY - 1 == 0) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iX + 2 == 9 && iY - 2 == 0) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iX + 2 == 9 && iY - 1 == 0) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iX + 1 == 9 && iY - 2 == 0) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iY - 2 == 0 && iX > 1 && iX < 8) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX + 2 << " " << iY + 1 << endl;
                cout << iX + 2 << " " << iY - 1 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iY - 1 == 0 && iX > 1 && iX < 8) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX + 2 << " " << iY + 1 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iX - 1 == 0 && iY - 1 == 0) {
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX + 2 << " " << iY + 1 << endl;
        } else {
            if (iX - 2 == 0 && iY - 2 == 0) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX + 2 << " " << iY + 1 << endl;
                cout << iX + 2 << " " << iY - 1 << endl;
        } else {
            if (iX - 2 == 0 && iY - 1 == 0) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX + 2 << " " << iY + 1 << endl;
        } else {
            if (iX - 1 == 0 && iY - 2 == 0) {
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX + 2 << " " << iY + 1 << endl;
                cout << iX + 2 << " " << iY - 1 << endl;
        } else {
            if (iX - 2 == 0 && iY > 1 && iY < 8) {
                cout << iX - 1 << " " << iY + 2 << endl;
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX + 2 << " " << iY + 1 << endl;
                cout << iX + 2 << " " << iY - 1 << endl;
                cout << iX + 1 << " " << iY - 2 << endl;
                cout << iX - 1 << " " << iY - 2 << endl;
        } else {
            if (iX - 1 == 0 && iY > 1 && iY < 8) {
                cout << iX + 1 << " " << iY + 2 << endl;
                cout << iX + 2 << " " << iY + 1 << endl;
                cout << iX + 2 << " " << iY - 1 << endl;
                cout << iX + 1 << " " << iY - 2 << endl;
        } else {
            if (iX - 1 == 0 && iY + 1 == 9) {
                cout << iX + 2 << " " << iY - 1 << endl;
                cout << iX + 1 << " " << iY - 2 << endl;
        } else {
            if (iX - 2 == 0 && iY + 2 == 9) {
                cout << iX + 2 << " " << iY + 1 << endl;
                cout << iX + 2 << " " << iY - 1 << endl;
                cout << iX + 1 << " " << iY - 2 << endl;
                cout << iX - 1 << " " << iY - 2 << endl;
        } else {
            if (iX - 2 == 0 && iY + 1 == 9) {
                cout << iX + 2 << " " << iY - 1 << endl;
                cout << iX + 1 << " " << iY - 2 << endl;
                cout << iX - 1 << " " << iY - 2 << endl;
        } else {
            if (iX - 1 == 0 && iY + 2 == 9) {
                cout << iX + 2 << " " << iY + 1 << endl;
                cout << iX + 2 << " " << iY - 1 << endl;
                cout << iX + 1 << " " << iY - 2 << endl;
        } else {
            if (iY + 2 == 9 && iX > 1 && iX < 8) {
                cout << iX + 2 << " " << iY + 1 << endl;
                cout << iX + 2 << " " << iY - 1 << endl;
                cout << iX + 1 << " " << iY - 2 << endl;
                cout << iX - 1 << " " << iY - 2 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
                cout << iX - 2 << " " << iY + 1 << endl;
        } else {
            if (iY + 1 == 9 && iX > 1 && iX < 8) {
                cout << iX + 2 << " " << iY - 1 << endl;
                cout << iX + 1 << " " << iY - 2 << endl;
                cout << iX - 1 << " " << iY - 2 << endl;
                cout << iX - 2 << " " << iY - 1 << endl;
    }
    return 0;
        }}}}}}}}}}}}}}}}}}}}}}}}}
