//
//  main.cpp
//  tareaintegradora
//
//  Created by Enrique Villa on 11/4/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//
//     Algoritmo
//  1. Mostrar el tablero
//  2. Pedir movimiento jugador O y verificar si es válido
//  3. Revisar si hay un ganador
//  4. Si hay un ganador salir del juego, si no, pedir al usuario si desea continuar el juego
//  5. Pedir movimiento jugador X y verificar si es válido
//  6. Revisar si hay un ganador
//  7. Si hay un ganador salir del juego, si no, pedir al usuario si desea continuar el juego
//  8. Mostrar número de piezas restantes y ganador/empate
//
//     Juego de damas

#include <iostream>
using namespace std;

void asignaTablero(char cJug1, char cJug2, char cTablero[8][8]) {
    for (int iFila = 0; iFila < 8; iFila++) {
        for (int iCol = 0; iCol < 8; iCol++) {
            if (iFila % 2 == 0 && iCol % 2 == 0) {
                cTablero[iFila][iCol] = '-';
            } else {
                cTablero[iFila][iCol] = ' ';
            }
            if (iFila % 2 != 0 && iCol % 2 != 0) {
                cTablero[iFila][iCol] = '-';
            }
        }
    }
    for (int iFila = 0; iFila < 3; iFila++) {
        if (iFila % 2 == 0) {
            for (int iCol = 0; iCol < 8; iCol++) {
                if (iCol % 2 != 0) {
                    cTablero[iFila][iCol] = cJug1;
                }
           }
        }
        if (iFila % 2 != 0) {
            for (int iCol = 0; iCol < 8; iCol++) {
                if (iCol % 2 == 0) {
                    cTablero[iFila][iCol] = cJug1;
                }
           }
        }
    }
    for (int iFila = 5; iFila < 8; iFila++) {
        if (iFila % 2 == 0) {
            for (int iCol = 0; iCol < 8; iCol++) {
                if (iCol % 2 != 0) {
                    cTablero[iFila][iCol] = cJug2;
                }
            }
        }
        if (iFila % 2 != 0) {
            for (int iCol = 0; iCol < 8; iCol++) {
                if (iCol % 2 == 0) {
                    cTablero[iFila][iCol] = cJug2;
                }
            }
        }
    }
}

void muestraTablero(char cTablero[8][8]) {
    cout << "  ";
    for (int iCol = 1; iCol < 9; iCol++) {
        cout << " " << iCol << "  ";
    }
    cout << endl;
    for (int iFila1 = 0; iFila1 < 8; iFila1++) {
        cout << iFila1 + 1 << " ";
        for (int iCol2 = 0; iCol2 < 8; iCol2++) {
            cout << "[" << cTablero[iFila1][iCol2] << "] ";
        }
            cout << endl;
    }
}

void moverPieza1(char cTablero[8][8], char cJug1, char cJug2, int iPiezaR, int iPiezaC, char cMov, int &iCount2) {
    cout << "Jugador " << cJug1 << ":" << endl;
    do {
        cout << "Renglón -> ";
        cin >> iPiezaR;
        cout << "Columna -> ";
        cin >> iPiezaC;
        iPiezaR--;
        iPiezaC--;
    } while (cTablero[iPiezaR][iPiezaC] != cJug1);
    do {
        cout << "Dirección (J - izquierda, K - derecha) -> ";
        cin >> cMov;
        cMov = toupper(cMov);
    } while (cMov != 'J' && cMov != 'K');
    if (iPiezaR + 1 <= 8 && iPiezaC - 1 >= 0 && cMov == 'J') {
        if (cTablero[iPiezaR + 1][iPiezaC - 1] == ' ') {
            cTablero[iPiezaR][iPiezaC] = ' ';
            cTablero[iPiezaR + 1][iPiezaC - 1] = cJug1;
        }
        if (cTablero[iPiezaR + 1][iPiezaC - 1] == cJug2) {
            if (cTablero[iPiezaR + 2][iPiezaC - 2] != cJug2 && cTablero[iPiezaR + 2][iPiezaC - 2] != cJug1 && iPiezaR + 2 <= 8 && iPiezaC - 2 >= 0) {
                cTablero[iPiezaR][iPiezaC] = ' ';
                cTablero[iPiezaR + 1][iPiezaC - 1] = ' ';
                cTablero[iPiezaR + 2][iPiezaC - 2] = cJug1;
                iCount2--;
            } else if (cTablero[iPiezaR][iPiezaC] == cJug1) {
                cout << "Jugada inválida" << endl;
            }
        } else if (cTablero[iPiezaR][iPiezaC] == cJug1) {
            cout << "Jugada inválida" << endl;
        } 
    } else if (cMov == 'J') {
        cout << "Jugada inválida" << endl;
    }
    if (iPiezaR + 1 <= 8 && iPiezaC + 1 <= 8 && cMov == 'K') {
        if (cTablero[iPiezaR + 1][iPiezaC + 1] == ' ') {
            cTablero[iPiezaR][iPiezaC] = ' ';
            cTablero[iPiezaR + 1][iPiezaC + 1] = cJug1;
        }
        if (cTablero[iPiezaR + 1][iPiezaC + 1] == cJug2) {
            if (cTablero[iPiezaR + 2][iPiezaC + 2] != cJug2 && cTablero[iPiezaR + 2][iPiezaC - 2] != cJug1 && iPiezaR + 2 <= 8 && iPiezaC + 2 <= 8) {
                cTablero[iPiezaR][iPiezaC] = ' ';
                cTablero[iPiezaR + 1][iPiezaC + 1] = ' ';
                cTablero[iPiezaR + 2][iPiezaC + 2] = cJug1;
                iCount2--;
            } else if (cTablero[iPiezaR][iPiezaC] == cJug1) {
                cout << "Jugada inválida" << endl;
            }
        } else if (cTablero[iPiezaR][iPiezaC] == cJug1) {
            cout << "Jugada inválida" << endl;
        }
    } else if (cMov == 'K') {
        cout << "Jugada inválida" << endl;
    }
}

void verificaGanador(bool &bGana1, bool &bGana2, int &iCount1, int &iCount2) {
    if (iCount1 == 0) {
        bGana2 = true;
    }
    if (iCount2 == 0) {
        bGana1 = true;
    }
}


void moverPieza2(char cTablero[8][8], char cJug1, char cJug2, int iPiezaR, int iPiezaC, char cMov, int &iCount1) {
    cout << "Jugador " << cJug2 << ":" << endl;
    do {
        cout << "Renglón -> ";
        cin >> iPiezaR;
        cout << "Columna -> ";
        cin >> iPiezaC;
        iPiezaR--;
        iPiezaC--;
    } while (cTablero[iPiezaR][iPiezaC] != cJug2);
    do {
        cout << "Dirección (J - izquierda, K - derecha) -> ";
        cin >> cMov;
        cMov = toupper(cMov);
    } while (cMov != 'J' && cMov != 'K');
    if (iPiezaR - 1 > -1 && iPiezaC - 1 > -1 && cMov == 'J') {
        if (cTablero[iPiezaR - 1][iPiezaC - 1] == ' ') {
            cTablero[iPiezaR][iPiezaC] = ' ';
            cTablero[iPiezaR - 1][iPiezaC - 1] = cJug2;
        }
        if (cTablero[iPiezaR - 1][iPiezaC - 1] == cJug1) {
            if (cTablero[iPiezaR - 2][iPiezaC - 2] != cJug1 && cTablero[iPiezaR - 2][iPiezaC - 2] != cJug2 && iPiezaR - 2 >= 0 && iPiezaC - 2 >= 0) {
                cTablero[iPiezaR][iPiezaC] = ' ';
                cTablero[iPiezaR - 1][iPiezaC - 1] = ' ';
                cTablero[iPiezaR - 2][iPiezaC - 2] = cJug2;
                iCount1--;
            } else if (cTablero[iPiezaR][iPiezaC] == cJug2) {
                cout << "Jugada inválida" << endl;
            }
        } else if (cTablero[iPiezaR][iPiezaC] == cJug2) {
            cout << "Jugada inválida" << endl;
        }
    } else if (cMov == 'J') {
        cout << "Jugada inválida" << endl;
    }
    if (iPiezaR - 1 >= 0 && iPiezaC + 1 <= 8 && cMov == 'K') {
        if (cTablero[iPiezaR - 1][iPiezaC + 1] == ' ') {
            cTablero[iPiezaR][iPiezaC] = ' ';
            cTablero[iPiezaR - 1][iPiezaC + 1] = cJug2;
        }
        if (cTablero[iPiezaR - 1][iPiezaC + 1] == cJug1) {
            if (cTablero[iPiezaR - 2][iPiezaC + 2] != cJug1 && cTablero[iPiezaR - 2][iPiezaC - 2] != cJug2 && iPiezaR - 2 >= 0 && iPiezaC + 2 <= 8) {
                cTablero[iPiezaR][iPiezaC] = ' ';
                cTablero[iPiezaR - 1][iPiezaC + 1] = ' ';
                cTablero[iPiezaR - 2][iPiezaC + 2] = cJug2;
                iCount1--;
            } else if (cTablero[iPiezaR][iPiezaC] == cJug2) {
                cout << "Jugada inválida" << endl;
            }
        } else if (cTablero[iPiezaR][iPiezaC] == cJug2) {
            cout << "Jugada inválida" << endl;
        }
    } else if (cMov == 'K') {
        cout << "Jugada inválida" << endl;
    }
}

void seguirJuego(char &cSeguir, bool bGana1, bool bGana2) {
    if (bGana1 == false && bGana2 == false) {
        do {
            cout << "Seguir (s/n) -> ";
            cin >> cSeguir;
        } while (cSeguir != 's' && cSeguir != 'n');
    } else {
        cSeguir = 'n';
    }
}


int main() {
    bool bGana1 = false, bGana2 = false;
    char cTablero[8][8], cJug1 = 'O', cJug2 = 'X', cSeguir = 's', cMov;
    int iPiezaR, iPiezaC, iCount1 = 0, iCount2 = 0;
    asignaTablero(cJug1,cJug2, cTablero); // llena la matriz con los datos char
    for (int iFila = 0; iFila < 8; iFila++) {
        for (int iCol = 0; iCol < 8; iCol++) {
            if (cTablero[iFila][iCol] == cJug1) {
                iCount1++;
            } else if (cTablero[iFila][iCol] == cJug2) {
                iCount2++;
            }
        }
    }
    do {
        muestraTablero(cTablero); // imprime el tablero
        moverPieza1(cTablero, cJug1, cJug2, iPiezaR, iPiezaC, cMov, iCount2); // todo lo relacionado con el movimiento del cJug1
        muestraTablero(cTablero); // imprime el tablero otra vez
        verificaGanador(bGana1, bGana2, iCount1, iCount2); // compara el número de piezas en juego para checar si hay un ganador
        seguirJuego(cSeguir, bGana1, bGana2); // pide al usuario si continúa el juego
        if (cSeguir != 's') {
            break;
        }
        moverPieza2(cTablero, cJug1, cJug2, iPiezaR, iPiezaC, cMov, iCount1); // todo lo relacionado con el movimiento del cJug1
        verificaGanador(bGana1, bGana2, iCount1, iCount2); // compara el número de piezas en juego para checar si hay un ganador
        seguirJuego(cSeguir, bGana1, bGana2); // pide al usuario si continúa el juego
    } while (cSeguir == 's');
    if (bGana1 == true) {
        cout << "Fin del juego, el ganador es el jugador " << cJug1 << endl;
    } else if (bGana2 == true) {
        cout << "Fin del juego, el ganador es el jugador " << cJug2 << endl;
    } else {
        cout << "El juego ha sido finalizado, el jugador " << cJug1 << " terminó el juego con " << iCount1 << " piezas y el jugador " << cJug2 << " terminó el juego con " << iCount2 << " piezas. ";
        if (iCount1 > iCount2) {
            cout << "El jugador " << cJug1 << " es el ganador." << endl;
        } else if (iCount2 > iCount1) {
            cout << "El jugador " << cJug2 << " es el ganador." << endl;
        }
        if (iCount1 == iCount2) {
            cout << "El juego es un empate." << endl;
        }
    }
    return 0;
}