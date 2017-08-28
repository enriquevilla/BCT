//
//  Actor.h
//  ProyectoP2
//
//  Created by Enrique Villa on 3/6/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Actor_h
#define Actor_h

class Actor {
public:
    Actor();
    Actor(int iden, string nom);
    void setID(int iden);
    void setNombre(string nom);
    int getID();
    string getNombre();
    void muestra();
private:
    int iD;
    string nombre;
};

Actor :: Actor() {
    iD = 0;
    nombre = "";
}

Actor :: Actor(int iden, string nom) {
    iD = iden;
    nombre = nom;
}

void Actor :: setID(int iden) {
    iD = iden;
}

void Actor :: setNombre(string nom) {
    nombre = nom;
}

int Actor :: getID() {
    return iD;
}

string Actor :: getNombre() {
    return nombre;
}

void Actor :: muestra() {
    cout << iD << " " << nombre << endl;
}
#endif /* Actor_h */
