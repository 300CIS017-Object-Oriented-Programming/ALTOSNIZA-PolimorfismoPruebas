//
// Created by lufe0 on 3/11/2021.
// Modificado el 30 de marzo del 2022
//

#include "gtest/gtest.h"
#include "../src/Model/Fundador.h"

TEST(PropietarioTest, calcularAdministracion) {
    //Arrange section
    Propiedad * propiedadPrueba = new Propiedad(1,  10, 200,  false);
    Fundador * fundador = new Fundador("CAMILO", 1,propiedadPrueba);
    int baseAdministracion = 50000;

    //Act section
    int costoAdministracion= fundador->calcularPagoAdmin(baseAdministracion);

    //Assert section
    // Se espera que para un propietario fundador que vive en un piso 10 con un apto de 200mts el cobro de la administración sea de 70005
    EXPECT_EQ(72500,costoAdministracion);
}