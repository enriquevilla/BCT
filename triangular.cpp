//
//  main.cpp
//  qwe5
//
//  Created by Enrique Villa on 9/20/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int iN, iS;
    cin >> iN;
    for (int iC = 1; iS < iN; iC++) {
        iS = iS + iC;
    }
    if (iN == iS) {
        cout << "IT IS TRIANGULAR" << endl;
    } else {
        cout << "IT IS NOT TRIANGULAR" << endl;
    }
    return 0;
}
