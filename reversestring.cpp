//
//  main.cpp
//  123
//
//  Created by Enrique Villa on 11/8/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sPalabra, sPalReves;
    cin >> sPalabra;
    sPalabra.length();
    sPalReves =
    sPalReves = "";
    for (int iCont = sPalabra.length() - 1; iCont >= 0; iCont--) {
        sPalReves += sPalabra[iCont];
    }
    cout << sPalabra << endl;
    cout << sPalReves << endl;
    return 0;
}
