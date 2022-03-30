#include "Admin.h"

Admin::Admin() {
    this->tarifaAdmin = 100;
    Admin::crearDummyData();
}

void Admin::crearDummyData() {
    //Propiedad propUno = new Propiedad(1, 1, 120, true);

    // El auto rememplaza el tipo cuando el new es del mismo tipo que quiero crear
    auto propUno = new Propiedad(1, 1, 120, true);

    // Fundador* x = new Fundador("juan", 1, propUno);
    auto *x = new Fundador("nombre", 1, propUno);
    this->propietarios.insert({1, x});

    auto propDos = new Propiedad(2, 2, 160, false);
    auto *x1 = new Fundador("jose", 2, propDos);
    this->propietarios.insert({2, x1});

    auto propTres = new Propiedad(3, 1, 100, true);
    auto *x2 = new Reventa("juana", 3, propTres);
    this->propietarios.insert({3, x2});

    auto propCuatro = new Propiedad(4, 4, 1120, true);
    auto *x3 = new Fundador("juanito", 4, propCuatro);
    this->propietarios.insert({4, x3});

    auto propCinco = new Propiedad(5, 2, 120, false);
    auto *x4 = new Reventa("juance", 5, propCinco);
    this->propietarios.insert({5, x4});

    auto propSeis = new Propiedad(6, 1, 10, true);
    auto *x5 = new Reventa("juanpa", 6, propSeis);
    this->propietarios.insert({6, x5});
}

float Admin::recaudarAdmin() {
    float recaudo = 0;
    int i;
    for (i = 1; i < propietarios.size() + 1; i++) {
        recaudo += this->propietarios[i]->calcularPagoAdmin(tarifaAdmin);
    }
    return recaudo;
}

float Admin::mostrarPagoAdmin(int id) {
    if (existeProp(id)) {
        return propietarios[id]->calcularPagoAdmin(tarifaAdmin);
    } else {
        throw std::domain_error("El propietario no existe.\n");
    }

}

string Admin::mostrarBeneficios(int id) {
    if (existeProp(id)) {
        return this->propietarios[id]->mostrarBeneficios();
    } else {
        throw std::domain_error("El propietario no existe.\n");
    }

}

string Admin::mostrarPropConParqueadero() {
    int i;
    string propParq;
    for (i = 1; i < propietarios.size() + 1; i++) {
        if (this->propietarios[i]->getPropiedad()->getParqueadero()) {
            propParq += this->propietarios[i]->getNombre() + "\n";
        }
    }
    return propParq;
}

string Admin::mostrarPropSinParqueadero() {
    int i;
    string propParq;
    for (i = 1; i < propietarios.size() + 1; i++) {
        if (!this->propietarios[i]->getPropiedad()->getParqueadero()) {
            propParq += this->propietarios[i]->getNombre() + "\n";
        }
    }
    return propParq;
}

bool Admin::existeProp(int id) {
    for (auto pPropietarios = this->propietarios.begin();
         pPropietarios != propietarios.end(); pPropietarios++) {
        Propietario *propTemp = pPropietarios->second;
        if (propTemp->getId() == id) {
            return true;
        }
    }
    return false;
}

map<int, Propietario *> Admin::getPropietarios() {
    return this->propietarios;
}
