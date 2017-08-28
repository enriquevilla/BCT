//
//  main.cpp
//  17
//
//  Created by Enrique Villa on 1/17/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sString, sRevString = "";
    int iTam = 0, iSpace = 0;
    getline(cin,sString);
    iTam = sString.length();
    sString.insert(iTam," ");
    iSpace = sString.find(' ') + 1;
    for (int iCont = 0; iSpace != 0; iCont++) {
        sRevString.insert(0,sString.substr(0,iSpace));
        sString.erase(0,iSpace);
        iSpace = sString.find(' ') + 1;
        if (iSpace == 0) {
            sRevString.insert(0,sString.substr(0));
        }
    }
    cout << sRevString << endl;
    return 0;
}
