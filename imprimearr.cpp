//
//  main.cpp
//  111
//
//  Created by Enrique Villa on 10/20/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int iSizeC, iSizeR, iMatNum[10][10];
    cin >> iSizeR >> iSizeC;
    for (int iRen = 0; iRen < iSizeR; iRen++) {
        for (int iCol = 0; iCol < iSizeC; iCol++) {
            cin >> iMatNum[iRen][iCol];
        }
    }
    cout << endl;
    for (int iRen = 0; iRen < iSizeR; iRen++) {
        for (int iCol = 0; iCol < iSizeC; iCol++) {
            cout << iMatNum[iRen][iCol] << " ";
        }
        cout << endl;
    }
    return 0;
}
