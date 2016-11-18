//
//  main.cpp
//  eld
//
//  Created by Enrique Villa on 11/15/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sNum;
    bool bCheck = false;
    while (bCheck == false || sNum.length() != 10) {
        cin >> sNum;
        for (int iCont = 0; iCont < sNum.length(); iCont++) {
            bCheck = isdigit(sNum[iCont]);
            if (bCheck == false) {
                break;
            }
        }
    }
    cout << "(" << sNum.substr(0,2) << ") " << sNum.substr(2,4) << " " << sNum.substr(6,4) << endl;
    return 0;
}
