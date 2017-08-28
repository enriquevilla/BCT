//
//  Animal.h
//  31.03.17
//
//  Created by Enrique Villa on 3/31/17.
//  Copyright © 2017 Enrique Villa. All rights reserved.
//

#ifndef Animal_h
#define Animal_h

class Animal
{
public:
    Animal(string, int);
    int	calculaEdad();
    virtual	void habla() = 0;    //Nota	que	son	funciones virtual pura.
    virtual	void muestra() = 0;	 //	ENTONCES la clase es abstracta.
protected:
    string sNombre;
    int	iAnioNacim;
};
Animal::Animal(string sNom, int iANac)
{
    sNombre	= sNom;
    iAnioNacim = iANac;
}
int	Animal::calculaEdad()
{
    return 2017 - iAnioNacim;
}

class Perro : public Animal {
public:
    Perro(string, int);
    void habla();
    void muestra();
};

Perro :: Perro(string s, int i) : Animal(s, i) {
}

void Perro :: habla() {
    cout << "GUAU" << endl;
}

void Perro :: muestra() {
    cout << "Soy el perro " << sNombre << " y tengo " << calculaEdad() << " años." << endl;
}

class Gato : public Animal {
public:
    Gato(string, int);
    void habla();
    void muestra();
};

Gato :: Gato(string s, int i) : Animal(s, i) {
}

void Gato :: habla() {
    cout << "MIAU" << endl;
}

void Gato :: muestra() {
    cout << "Soy el gato " << sNombre << " y tengo " << calculaEdad() << " años." << endl;
}
#endif /* Animal_h */
