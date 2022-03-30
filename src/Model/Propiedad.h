#ifndef PROPIEDAD_H
#define PROPIEDAD_H

#include <iostream>


class Propiedad {
private:
    int id, piso;
    float area;
    bool tieneParqueadero;
public:
    Propiedad() = default;

    Propiedad(int id, int piso, float area, bool parqueadero);

    float calcPagoAdmin(int valor);

    bool getParqueadero();

    void setParqueadero(bool parqueadero);

    int getId() const;

    void setId(int id);


};

#endif