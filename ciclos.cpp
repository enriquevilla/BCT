//
//  main.cpp
//  codetest
//
//  Created by Enrique Villa on 10/6/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int c = 1; c <= 4; c++) {
        cout << c;
        for (int p = n; p > 0; p--)
                cout << "*";
            n--;
        
    }
    return 0;
}