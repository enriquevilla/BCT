//
//  main.cpp
//  69
//
//  Created by Enrique Villa on 11/8/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sPalabra1, sPalabra2, sFrase;
    int iLugar, iLength;
    getline(cin,sFrase);
    cin >> sPalabra1;
    cin >> sPalabra2;
    for (int iCont = 0; iCont < sFrase.length(); iCont++) {
        iLugar = sFrase.find(sPalabra1);
        if (iLugar >= 0) {
            iLength = sPalabra1.length();
            sFrase.erase(iLugar,iLength);
            sFrase.insert(iLugar,sPalabra2);
        }
    }
    cout << sFrase << endl;
    return 0;
}
