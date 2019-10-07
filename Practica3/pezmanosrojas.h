#ifndef PEZMANOSROJAS_H
#define PEZMANOSROJAS_H
#include "pez.h"
#include <iostream>

using namespace std;

class PezManosRojas: public Pez
{string especial;
public:
    PezManosRojas(string _clase,string sangre,int _numeropatas,string _tipopiel,string _venenoso, string _respiracion,string _alimentacion,string _habitat,string _reproduccion,string _desplazamiento,string _especial);
    void Respiro();
    void MeAlimento();
    void Habito();
    void MeReproduzco();
    void MeDesplazo();
};

#endif // PEZMANOSROJAS_H
