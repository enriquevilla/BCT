//
//  main.cpp
//  qwe2
//
//  Created by Enrique Villa on 9/20/16.
//  Copyright © 2016 Enrique Villa. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int iN;
    int iS;
    int iC;
    do
    {
        cin >> iN;
        iS = iS + iN;
        iC++;
    } while (iS < 1000);
    cout << iS << " " << iC << endl;
    return 0;
}
