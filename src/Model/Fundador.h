#ifndef FUNDADOR_H
#define FUNDADOR_H

#include <iostream>
#include "Propietario.h"


class Fundador : public Propietario {
public:
    Fundador() = default;
    Fundador(const string &nombre, int id, Propiedad *propiedad);

    string mostrarBeneficios() override;
};

#endif