#include "insecto.h"

Insecto::Insecto()
{

}

Insecto::Insecto(string _clase, string sangre, int _numeropatas, string _tipopiel, string _venenoso, string _respiracion, string _alimentacion, string _habitat, string _reproduccion, string _desplazamiento)
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

}
