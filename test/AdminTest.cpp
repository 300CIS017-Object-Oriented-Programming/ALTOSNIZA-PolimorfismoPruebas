//
// Codigo modificado - elaborado originalmente por >Santiago Penia
// Se podria mejorar para insertar los datos de tal manera que no dependa de los datos dummy que tiene el programa
//
#include "gtest/gtest.h"
#include "../src/Model/Admin.h"

TEST(AdminTest, recaudarAdmin){
    Admin prueba;
    EXPECT_EQ(22610,prueba.recaudarAdmin());
}

TEST(AdminTest, mostrarPagoAdmin){
    auto propiedadPrueba = new Propiedad(1,  8, 160,  false);
    auto fundadorPrueba = new Fundador("Santiago", 1,propiedadPrueba);
    int valorFijoAdmin = 100;
    EXPECT_EQ(16105,fundadorPrueba->calcularPagoAdmin(valorFijoAdmin));
}

TEST(AdminTest, mostrarBeneficios){
    Admin prueba;
    string texto = "1. Descuento el 0,05 en la mensualidad del gimnasio.\n";
    EXPECT_EQ(texto,prueba.mostrarBeneficios(3));
}

TEST(AdminTest, mostrarPropConParqueadero){
    Admin prueba;
    string texto = "nombre\njuana\njuanito\njuanpa\n";
    EXPECT_EQ(texto, prueba.mostrarPropConParqueadero());
}

TEST(AdminTest, mostrarBeneficiosExcep){
    Admin prueba;
    EXPECT_THROW(prueba.mostrarBeneficios(10), std::domain_error);
}

