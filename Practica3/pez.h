#ifndef PEZ_H
#define PEZ_H
#include "servivo.h"
#include <string>
#include <iostream>

using namespace std;

class Pez: public SerVivo
{protected:
    string clase;
    string tiposangre;
    int numeroPatas;
    string tipoPiel;
    string venenoso;
    string respiracion;
    string alimentacion;
    string habitat;
    string reproduccion;
    string desplazamiento;
public:
    Pez();
    Pez(string _clase,string sangre,int _numeropatas,string _tipopiel,string _venenoso,string _respiracion, string _alimentacion, string _habitat, string _reproduccion, string _desplazamiento);
};

#endif // PEZ_H
