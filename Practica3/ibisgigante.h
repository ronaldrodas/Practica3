#ifndef IBISGIGANTE_H
#define IBISGIGANTE_H
#include <string>
#include <iostream>
#include "ave.h"


using namespace std;


class IbisGigante: public Ave
{string especial;
public:
    IbisGigante(string _clase,string sangre,int _numeropatas,string _tipopiel,string _venenoso, string _respiracion,string _alimentacion,string _habitat,string _reproduccion,string _desplazamiento,string _especial);
    void Respiro();
    void MeAlimento();
    void Habito();
    void MeReproduzco();
    void MeDesplazo();
};

#endif // IBISGIGANTE_H
