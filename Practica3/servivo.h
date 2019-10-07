#ifndef SERVIVO_H
#define SERVIVO_H
#include <string>


class SerVivo
{
public:
    SerVivo();
    virtual void Respiro() = 0;
    virtual void MeAlimento() = 0;
    virtual void Habito() = 0;
    virtual void MeReproduzco() = 0;
    virtual void MeDesplazo() = 0;

};

#endif // SERVIVO_H
