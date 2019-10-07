#ifndef ORNITORRINCO_H
#define ORNITORRINCO_H
#include <string>
#include <iostream>
#include "mamifero.h"


using namespace std;


class Ornitorrinco: public Mamifero
{string especial;
public:
    Ornitorrinco(string _clase,string sangre,int _numeropatas,string _tipopiel,string _venenoso, string _respiracion,string _alimentacion,string _habitat,string _reproduccion,string _desplazamiento,string _especial);
    void Respiro();
    void MeAlimento();
    void Habito();
    void MeReproduzco();
    void MeDesplazo();
};

#endif // ORNITORRINCO_H
