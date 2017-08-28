//
//  main.cpp
//  ProyectoP1
//
//  Created by Enrique Villa on 2/13/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//
//  Programa para generar el html de un cpp con documentación en el formato correcto

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream archEnt;
    ofstream archSal;
    string sString, sNomArch;
    long lFind;
    cout << "Nombre del archivo cpp" << endl;
    cin >> sNomArch;
    archEnt.open(sNomArch + ".cpp");
    archSal.open(sNomArch + ".html");
    archSal << "<!DOCTYPE html>";
    archSal << "<html>";
    archSal << "<head>";
    archSal << "<title>";
    archSal << "Documentaci&oacute;n del archivo " << sNomArch;
    archSal << "</title>";
    archSal << "</head>";
    archSal << "<body>";
    //Copia la información al html, a menos de que se encuentre en un comentario de tipo //
    while (getline(archEnt, sString)) {
        if (sString.find("@progName") != -1 && sString.find("//") == -1) {
            lFind = sString.find("@progName");
            sString.erase(0,lFind);
            sString.erase(0,9);
            archSal << "<h2>" << "Programa: " << sString.substr(0) << "</h2> \r" << endl;
        }
        if (sString.find("@author") != -1 && sString.find("//") == -1) {
            lFind = sString.find("@author");
            sString.erase(0,lFind);
            sString.erase(0,7);
            archSal << "<strong>" << "Autor: " << "</strong>" << sString.substr(0) << "<br>";
        }
        if (sString.find("@desc") != -1 && sString.find("//") == -1) {
            lFind = sString.find("@desc");
            sString.erase(0,lFind);
            sString.erase(0,5);
            archSal << "<strong>" << "Descripci&oacute;n: " << "</strong>" << sString.substr(0) << "<br>";
        }
        if (sString.find("@date") != -1 && sString.find("//") == -1) {
            lFind = sString.find("@date");
            sString.erase(0,lFind);
            sString.erase(0,5);
            archSal << "<strong>" << "Fecha de elaboraci&oacute;n: " << "</strong>" << sString.substr(0) << "<br>";
        }
        if (sString.find("@funcName") != -1 && sString.find("//") == -1) {
            lFind = sString.find("@funcName");
            sString.erase(0,lFind);
            sString.erase(0,9);
            archSal << "<h3><hr><br>" << "Funci&oacute;n: " << sString.substr(0) << "<br></h3>";
        }
        if (sString.find("@param") != -1 && sString.find("//") == -1) {
            lFind = sString.find("@param");
            sString.erase(0,lFind);
            sString.erase(0,6);
            archSal << "<strong>" << "Par&aacute;metro: " << "</strong>" << sString.substr(0) << "<br>";
        }
        if (sString.find("@return") != -1 && sString.find("//") == -1) {
            lFind = sString.find("@return");
            sString.erase(0,lFind);
            sString.erase(0,7);
            archSal << "<strong>" << "Valor de retorno: " << "</strong>" << sString.substr(0) << "<br>";
        }
    }
    archSal << "</body>";
    archSal << "</html>";
    archEnt.close();
    archSal.close();
    return 0;
}
