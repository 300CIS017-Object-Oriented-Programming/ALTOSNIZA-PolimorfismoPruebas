#include "Propietario.h"

Propietario::Propietario(const string &nombre, int id, Propiedad *propiedad) : nombre(nombre), id(id),
                                                                               propiedad(propiedad) {}

float Propietario::calcularPagoAdmin(int valorFijo) {
    return propiedad->calcPagoAdmin(valorFijo);
}

const string &Propietario::getNombre() const {
    return nombre;
}

void Propietario::setNombre(const string &nombre) {
    Propietario::nombre = nombre;
}

Propiedad *Propietario::getPropiedad() const {
    return propiedad;
}

void Propietario::setPropiedad(Propiedad *propiedad) {
    Propietario::propiedad = propiedad;
}

int Propietario::getId() const {
    return id;
}


