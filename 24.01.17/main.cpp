//
//  main.cpp
//  24.01.17
//
//  Created by Enrique Villa on 1/24/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream archEnt;
    ofstream archSal;
    string sNombre;
    int iT1, iT2, iT3, iP = 0, iAlumnos, iPG = 0;
    archEnt.open("alumnos.txt");
    archSal.open("promedios.txt");
    while (archEnt >> sNombre >> iT1 >> iT2 >> iT3) {
        iP = (iT1 + iT2 + iT3) / 3;
        archSal << sNombre << " " << iP << endl;
        iAlumnos++;
        iPG += iP;
    }
    iPG = iPG / iAlumnos;
    archSal << "Alumnos: " << iAlumnos << endl;
    archSal << "Promedio grupo: " << iPG << endl;
    archEnt.close();
    return 0;
}
