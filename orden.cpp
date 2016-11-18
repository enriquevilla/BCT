//
//  main.cpp
//  test2
//
//  Created by Enrique Villa on 10/11/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

void intercambia(double &dA, double &dB) {
    double temp = dA;
        dA = dB;
        dB = temp;
    }

int main() {
    double dA, dB, dC;
    cin >> dA;
    cin >> dB;
    cin >> dC;
    if (dA > dB) {
        intercambia(dA, dB);
    }
    if (dA > dC) {
        intercambia(dA, dC);
    }
    if (dB > dC) {
        intercambia(dB, dC);
    }
    cout << dA << " " << dB << " " << dC;
    return 0;
}
