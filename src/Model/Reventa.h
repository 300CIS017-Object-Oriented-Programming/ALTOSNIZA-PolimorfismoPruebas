#ifndef REVENTA_H
#define REVENTA_H

#include <iostream>
#include "Propietario.h"

using namespace std;

class Reventa : public Propietario {
public:
    Reventa() = default;

    Reventa(const string &nombre, int id, Propiedad *propiedad);

    string mostrarBeneficios() override;
};

#endif