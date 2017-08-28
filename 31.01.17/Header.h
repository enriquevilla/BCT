//
//  Header.h
//  31.01.17
//
//  Created by Enrique Villa on 1/31/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Header_h
#define Header_h

class Complejo {
public:
    Complejo();
    Complejo(int);
    Complejo suma (Complejo);
    
private:
    double dReal, dImag;
};

Complejo Complejo :: suma (Complejo obj2); {
    Complejo result;
    result.dReal = dReal + obj2.dReal;
    result.dImag = dImag + obj2.dImag;
    return result;
}

#endif /* Header_h */
