#include "View.h"

void View::mostrarMenu(){
    int opcion, id;
    do{
        cout << "Menu:" << endl
            << "1. Ver Recaudo Admin." << endl
            << "2. Ver Beneficios." << endl
            << "3. Ver propietarios con tieneParqueadero." << endl
            << "4. Ver pago Admin de un propietario dado." << endl
            << "5. Ver propietarios Sin tieneParqueadero." << endl
            << "0. Salir." << endl;
        cin >> opcion;
        switch(opcion){
            case 1:
                cout << "El valor reacaudado es de: " << edificio.recaudarAdmin() << endl;
                break;
            case 2:
                cout << "Escriba la id del propietario: ";
                cin >> id;
                try{
                    cout << edificio.mostrarBeneficios(id);
                }catch(std::domain_error &ex){
                    cout << "ERROR: " << ex.what();
                }
                break;
            case 3:
                cout << edificio.mostrarPropConParqueadero();
                break;
            case 4:
                cout << "Escriba la id del propietario: ";
                cin >> id;
                try{
                    edificio.mostrarPagoAdmin(id);
                }catch(std::domain_error &ex){
                    cout << "ERROR: " << ex.what();
                }
                break;
            case 5:
                cout << edificio.mostrarPropSinParqueadero();
                break;
            case 0:
                cout << "Vuelva pronto \n";
                break;
            default:
                cout << "La opción especificada no existe \n";
        }
    }while(opcion);
}