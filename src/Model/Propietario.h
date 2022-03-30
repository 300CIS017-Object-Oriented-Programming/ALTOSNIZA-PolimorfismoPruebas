#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include "Propiedad.h"

using std::string;

class Propietario {
protected:
    string nombre;
    int id;
    Propiedad *propiedad;
public:
    Propietario() = default;

    Propietario(const string &nombre, int id, Propiedad *propiedad);

    float calcularPagoAdmin(int valor);

    virtual string mostrarBeneficios() = 0;

    const string &getNombre() const;

    void setNombre(const string &nombre);

    void setId(int id);

    Propiedad *getPropiedad() const;

    void setPropiedad(Propiedad *propiedad);

    int getId() const;

};

#endif