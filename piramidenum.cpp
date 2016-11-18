//
//  main.cpp
//  qwe3
//
//  Created by Enrique Villa on 9/20/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int iN;
    cin >> iN;
    for (int iC = 1; iC <= iN; iC++) {
        cout << iC << ", ";
    }
    for (int iC = iN - 1; iC > 1; iC--) {
        cout << iC << ", ";
    }
    iN = 1;
    cout << iN;
    return 0;
}
