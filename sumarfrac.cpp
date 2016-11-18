//
//  main.cpp
//  qwe
//
//  Created by Enrique Villa on 9/20/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double dSum = 0;
    int iC;
    cin >> iC;
    for (int iN = 1; iN < iC; iN++) {
        cout << "1/" << iN << " +" << " ";
        dSum = 1.0/iN + dSum;
    }
    cout << "1/" << iC << " ";
    dSum = dSum + 1.0/iC;
    cout << "= " << dSum << endl;
    return 0;
}
