#include "ornitorrinco.h"

Ornitorrinco::Ornitorrinco(string _clase,string sangre,int _numeropatas,string _tipopiel,string _venenoso, string _respiracion,string _alimentacion,string _habitat,string _reproduccion,string _desplazamiento,string _especial)
{   clase=_clase;
    tiposangre=sangre;
    numeroPatas=_numeropatas;
    tipoPiel=_tipopiel;
    venenoso=_venenoso;
    respiracion=_respiracion;
    alimentacion=_alimentacion;
    habitat=_habitat;
    reproduccion=_reproduccion;
    desplazamiento=_desplazamiento;
    especial=_especial;

}


void Ornitorrinco::Respiro()
{   cout<<"                ****************ORNITORRINCO*******************               "<<endl;
    cout<<"Clase: "<<clase<<endl;
    cout<<"Tipo de sangre: "<<tiposangre<<endl;
    cout<<"Numero de patas: "<<numeroPatas<<endl;
    cout<<"Tipo de piel: "<<tipoPiel<<endl;
    cout<<"Es venenoso: "<<venenoso<<endl;
    cout<<"Tipo de respiracion: "<<respiracion<<endl;
}

void Ornitorrinco::MeAlimento()
{
     cout<<"Tipo de alimentacion: "<<alimentacion<<endl;
}

void Ornitorrinco::Habito()
{
cout<<"Habitat: "<<habitat<<endl;
}

void Ornitorrinco::MeReproduzco()
{
cout<<"Tipo de reproduccion: "<<reproduccion<<endl;
}

void Ornitorrinco::MeDesplazo()
{
    cout<<"Desplazamiento: "<<desplazamiento<<endl;
    cout<<"Caracteristica especial: "<<especial<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}


