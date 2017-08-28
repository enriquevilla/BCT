//
//  main.cpp
//  ProyectoP2
//
//  Created by Enrique Villa on 3/6/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

#include "Pelicula.h"

//funcion para cargar los actores al arreglo
void cargaActores(Actor lista[], int &iCantAct) {
    ifstream archEntAct("Actores.txt");
    int iD;
    string sNombre;
    while (archEntAct >> iD) {
        getline(archEntAct,sNombre);
        lista[iCantAct].setID(iD);
        lista[iCantAct].setNombre(sNombre);
        iCantAct++;
    }
    archEntAct.close();
}

//funcion para mostrar actores
void muestraActores(Actor lista[], int iCantAct) {
    for (int iCont = 0; iCont < 20; iCont++) {
        cout << lista[iCont].getID() << lista[iCont].getNombre() << endl;
    }
    cout << endl;
}

//funcion para cargar peliculas al arreglo
void cargaPeliculas(Pelicula listaPel[], Actor listaAct[], int &iCantPel) {
    ifstream archEntPel("Peliculas.txt"), archEntAct("Actores.txt");
    int numPel, year, duracion, id, iCantAct1, iConta = 0;
    string genero, titulo;
    while (archEntPel >> numPel >> year >> duracion >> genero >> iCantAct1) {
        listaPel[iConta].setNumPel(numPel);
        listaPel[iConta].setYear(year);
        listaPel[iConta].setDuracion(duracion);
        listaPel[iConta].setGenero(genero);
        for (int iCont1 = 0; iCont1 < iCantAct1; iCont1++) {
            archEntPel >> id;
            for (int iCont2 = 0; iCont2 < 20; iCont2++) {
                if (id == listaAct[iCont2].getID()) {
                    listaPel[iConta].agregaActor(id);
                }
            }
        }
        getline(archEntPel, titulo);
        listaPel[iConta].setTitulo(titulo);
        iConta++;
        iCantPel++;
    }
}

//funcion para mostrar peliculas
void muestraPeliculas(Pelicula listaPel[], Actor listaAct[]) {
    ifstream archEntAct;
    for (int iCont = 0; iCont < 10; iCont++) {
        cout << "Título:" << listaPel[iCont].getTitulo() << endl;
        cout << "Número de película: " << listaPel[iCont].getNumPel() << endl;
        cout << "Año: " << listaPel[iCont].getYear() << endl;
        cout << "Duración: " << listaPel[iCont].getDuracion() << endl;
        cout << "Género: " << listaPel[iCont].getGenero() << endl;
        cout << "Actores:";
        for (int iCont1 = 0; iCont1 < listaPel[iCont].getCantAct(); iCont1++) {
            archEntAct.open("Actores.txt");
            int iD;
            string nombre;
            while (archEntAct >> iD) {
                getline(archEntAct,nombre);
                if (iD == listaPel[iCont].getActor(iCont1)) {
                    cout << nombre;
                    if (iCont1 + 1 < listaPel[iCont].getCantAct()) {
                        cout << ",";
                        iCont1++;
                    }
                }
            }
        }
        archEntAct.close();
        cout << endl << endl;
    }
}

void buscaPelicula(int iCont, Funcion listaF[], Pelicula listaP[]) {
    ifstream archEntPel("Peliculas.txt");
    string sTitu;
    int iNumPel, iCont1 = 0;
    while (archEntPel >> iNumPel) {
        getline(archEntPel,sTitu);
        if (iNumPel == listaF[iCont].getNumPel()) {
            cout << listaP[iCont1].getTitulo() << endl;
        }
        iCont1++;
    }
}

int main() {
    ifstream archEntAct, archEntPel("Peliculas.txt");
    Hora hora;
    Pelicula pelicula[20];
    Actor actor[20];
    Funcion funcion[20];
    int iHr = -1, iMin = -1, iCantA = 0, iCantP = 0, iCantF = 0, iConta = 0, iD, iNumPel, iYear, iDura, iD1 = 0;
    char cOpcion, cSeguir = '0';
    string sClave, sGenero, sTitu;
    bool bExiste = false;
    cargaActores(actor, iCantA);
    cargaPeliculas(pelicula, actor, iCantP);
    for (int iCont = 0; iCont < 20 && cSeguir != 'n'; iCont++) {
        int iHr, iMin, iSala, iNumPel = 0;
        string sClave;
        cout << "Teclea los datos para una funcion de: ";
        if (iCont > 0) {
            cin >> iNumPel;
        }
        while (bExiste == false) {
            cin >> iNumPel;
            while (iConta < 20 && bExiste == false) {
                if (iNumPel == pelicula[iConta].getNumPel()) {
                    bExiste = true;
                }
                iConta++;
            }
            iConta = 0;
        }
        bExiste = false;
        cout << "Clave: ";
        cin.ignore(256, '\n');
        getline(cin,sClave);
        cout << "Hora y minutos: ";
        cin >> iHr >> iMin;
        while(iHr < 0 || iHr > 23 || iMin < 0 || iMin > 59) {
            cin >> iHr >> iMin;
        }
        cout << "Sala: ";
        cin >> iSala;
        hora.setHora(iHr);
        hora.setMin(iMin);
        funcion[iCont].setClave(sClave);
        funcion[iCont].setHr(hora);
        funcion[iCont].setSala(iSala);
        funcion[iCont].setNumPel(iNumPel);
        iCantF++;
        cout << "¿Agregar otra? (s, n): ";
        cin >> cSeguir;
    }
    cout << "Opción: ";
    cin >> cOpcion;
    while (cOpcion != 'g') {
        switch (cOpcion) {
            case 'a':
                muestraActores(actor, iCantA);
                break;
            case 'b':
                muestraPeliculas(pelicula, actor);
                break;
            case 'c':
                for (int iCont = 0; iCont < iCantF; iCont++) {
                    cout << "Clave: " << funcion[iCont].getClave() << endl;
                    cout << "Título:";
                    buscaPelicula(iCont, funcion, pelicula);
                    cout << "Sala: " << funcion[iCont].getSala() << endl;
                    cout << "Hora: " << setfill('0') << setw(2) << funcion[iCont].getHora().getHora() << ":" << setfill('0') << setw(2) << funcion[iCont].getHora().getMin() << endl << endl;
                }
                break;
            case 'd':
                cout << "Teclea hora y minutos: ";
                cin >> iHr >> iMin;
                while (iHr < 0 || iHr > 23 || iMin < 0 || iMin > 59) {
                    cin >> iHr >> iMin;
                }
                hora.setHora(iHr);
                hora.setMin(iMin);
                for (int iCont = 0; iCont < iCantF; iCont++) {
                    if (hora == funcion[iCont].getHora()) {
                        cout << "Título:";
                        buscaPelicula(iCont, funcion, pelicula);
                        cout << "Sala: " << funcion[iCont].getSala() << endl << endl;
                    }
                }
                break;
            case 'e':
                cout << "Teclee la clave de la función: ";
                while (bExiste == false) {
                    cin >> sClave;
                    while (iConta < 20 && bExiste == false) {
                        if (sClave == funcion[iConta].getClave()) {
                            bExiste = true;
                        }
                        iConta++;
                    }
                    iConta = 0;
                }
                for (int iCont = 0; iCont < 20; iCont++) {
                    if (sClave == funcion[iCont].getClave()) {
                        ifstream archEntAct1("Actores.txt");
                        cout << "Sala: " << funcion[iCont].getSala() << endl;
                        cout << "Título:";
                        buscaPelicula(iCont, funcion, pelicula);
                        cout << "Hora: " << setfill('0') << setw(2) << funcion[iCont].getHora().getHora() << ":" << setfill('0') << setw(2) << funcion[iCont].getHora().getMin() << endl;
                        for (int iCont1 = 0; iCont1 < iCantA; iCont1++) {
                            if (pelicula[iCont1].getNumPel() == funcion[iCont].getNumPel()) {
                                cout << "Duración: " << pelicula[iCont1].getDuracion() << endl;
                                cout << "Género: " << pelicula[iCont1].getGenero() << endl;
                                cout << "Actores:";
                                int iD, iCont2 = 0;
                                string nombre;
                                while (iCont1 < 10) {
                                    while (archEntAct1 >> iD) {
                                        getline(archEntAct1,nombre);
                                        if (iD == pelicula[iCont1].getActor(iCont2)) {
                                            cout << nombre;
                                            if (iCont2 + 1 < pelicula[iCont1].getCantAct()) {
                                                cout << ",";
                                                iCont2++;
                                            }
                                        }
                                    }
                                    archEntAct1.close();
                                    iCont1++;
                                }
                            }
                        }
                        cout << endl << endl;
                    }
                }
                bExiste = false;
                break;
            case 'f':
                cout << "Teclee un ID de actor: ";
                do {
                    cin >> iD;
                    while (iConta < 20 && bExiste == false) {
                        if (iD == actor[iConta].getID()) {
                            bExiste = true;
                        }
                        iConta++;
                    }
                    iConta = 0;
                } while (bExiste != true);
                bExiste = false;
                ifstream archEntPel1("Peliculas.txt");
                while (archEntPel1 >> iNumPel >> iYear >> iDura >> sGenero >> iCantA) {
                    for (int iCont = 0; iCont < iCantA; iCont++) {
                        archEntPel1 >> iD1;
                        if (iD == iD1) {
                            bExiste = true;
                        }
                    }
                    getline(archEntPel1,sTitu);
                    if (bExiste == true) {
                        sTitu.erase(0,1);
                        cout << sTitu << " " << iYear << endl;
                        bExiste = false;
                    }
                }
                archEntPel1.close();
                break;
        }
        cout << "Opción: ";
        cin >> cOpcion;
    }
    return 0;
}
