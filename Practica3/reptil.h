#ifndef REPTIL_H
#define REPTIL_H
#include "servivo.h"
#include <string>
#include <iostream>


using namespace std;


class Reptil: public SerVivo
{
protected:
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
Reptil();
Reptil(string _clase,string sangre,int _numeropatas,string _tipopiel,string _venenoso,string _respiracion, string _alimentacion, string _habitat, string _reproduccion, string _desplazamiento);



};

#endif // REPTIL_H
