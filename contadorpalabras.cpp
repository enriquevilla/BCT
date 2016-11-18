//
//  main.cpp
//  324
//
//  Created by Enrique Villa on 11/8/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int iPal = 1;
    string sFrase;
    getline(cin, sFrase);
    for (int iCont = 0; iCont < sFrase.length(); iCont++) {
        if (sFrase[iCont] == ' ') {
            iPal++;
        }
    }
    cout << sFrase << endl;
    cout << iPal << endl;
    return 0;
}
