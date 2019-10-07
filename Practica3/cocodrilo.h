#ifndef COCODRILO_H
#define COCODRILO_H
#include "reptil.h"
#include <iostream>

using namespace std;


class Cocodrilo: public Reptil
{string especial;
public:
    Cocodrilo(string _clase,string sangre,int _numeropatas,string _tipopiel,string _venenoso, string _respiracion,string _alimentacion,string _habitat,string _reproduccion,string _desplazamiento,string _especial);
    void Respiro();
    void MeAlimento();
    void Habito();
    void MeReproduzco();
    void MeDesplazo();


};

#endif // COCODRILO_H



