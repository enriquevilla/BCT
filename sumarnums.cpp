//
//  main.cpp
//  qwe4
//
//  Created by Enrique Villa on 9/20/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int iN, iC;
    cin >> iN;
    for (iC = 1; iC < iN; iC++) {
        if (iC % 2 == 0) {
            cout << "1/" << iC << " + ";
        } else {
            cout << iC << " + ";
        }
    }
    if (iC % 2 == 0) {
        cout << "1/" << iC;
    } else {
        cout << iC;
    }
    return 0;
}
