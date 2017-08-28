//
//  main.cpp
//  21.02.17
//
//  Created by Enrique Villa on 2/21/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int iLineas;
    char c1[11], c2[11], c3[11], ctemp[11];
    cin >> iLineas;
    for (int iCont = 0; iCont < iLineas; iCont++) {
        cin >> c1 >> c2 >> c3;
        if (strcmp(c2, c1) < 0) {
            strcpy(ctemp, c2);
            strcpy(c2, c1);
            strcpy(c1, ctemp);
        }
        if (strcmp(c3, c1) < 0) {
            strcpy(ctemp, c3);
            strcpy(c3, c1);
            strcpy(c1, ctemp);
        }
        if (strcmp(c3, c2) < 0) {
            strcpy(ctemp, c3);
            strcpy(c3, c2);
            strcpy(c2, ctemp);
        }
        cout << c1 << " " << c2 << " " << c3 << endl;
    }
    return 0;
}