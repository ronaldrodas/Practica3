#ifndef AVISPONASIATICOGIGANTE_H
#define AVISPONASIATICOGIGANTE_H
#include "insecto.h"


class AvisponAsiaticoGigante: public Insecto
{string especial;
public:
    AvisponAsiaticoGigante(string _clase,string sangre,int _numeropatas,string _tipopiel,string _venenoso, string _respiracion,string _alimentacion,string _habitat,string _reproduccion,string _desplazamiento,string _especial);
    void Respiro();
    void MeAlimento();
    void Habito();
    void MeReproduzco();
    void MeDesplazo();
};

#endif // AVISPONASIATICOGIGANTE_H
