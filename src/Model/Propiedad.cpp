#include "Propiedad.h"


Propiedad::Propiedad(int id, int piso, float area, bool parqueadero) : id(id), piso(piso), area(area),
                                                                       tieneParqueadero(parqueadero) {}

float Propiedad::calcPagoAdmin(int valorAdministracion) {
    return (2000 * this->piso) + (valorAdministracion * 0.05 * (this->area > 150 ? 1 : 0)) + valorAdministracion;
}


bool Propiedad::getParqueadero() {
    return this->tieneParqueadero;
}


int Propiedad::getId() const {
    return id;
}

void Propiedad::setId(int id) {
    Propiedad::id = id;
}
