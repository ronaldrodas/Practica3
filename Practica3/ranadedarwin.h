#ifndef RANADEDARWIN_H
#define RANADEDARWIN_H
#include "anfibio.h"
#include <string>
#include <iostream>


using namespace std;


class RanaDeDarwin: public Anfibio
{string especial;
public:
    RanaDeDarwin(string _clase,string sangre,int _numeropatas,string _tipopiel,string _venenoso, string _respiracion,string _alimentacion,string _habitat,string _reproduccion,string _desplazamiento,string _especial);
    void Respiro();
    void MeAlimento();
    void Habito();
    void MeReproduzco();
    void MeDesplazo();
};

#endif // RANADEDARWIN_H
