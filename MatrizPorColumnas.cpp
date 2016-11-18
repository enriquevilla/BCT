//
//  main.cpp
//  MayorMatriz
//
//  Created by Enrique Villa on 11/4/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

void valorMayor(int iMatNum[10][10], int iSizeFC) {
    for (int iFila = 0, iCol = 0; iFila < iSizeFC; iFila++, iCol++) {
        cout << iMatNum[iFila][iCol] << endl;
    }
}

int main() {
    int iMatNum[10][10], iSizeFC;
    cin >> iSizeFC;
    for (int iFila = 0; iFila < iSizeFC; iFila++) {
        for (int iCol = 0; iCol < iSizeFC; iCol++) {
            cin >> iMatNum[iFila][iCol];
        }
    }
    valorMayor(iMatNum, iSizeFC);
    return 0;
}
