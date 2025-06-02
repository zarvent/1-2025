/*  
BILLETERA CSZV

Algo sencillo y facil tipo Spendee en c++
(Solo se puede usar la librería iostream,vector y string)
Este es un programa de billetera digital que permite al usuario registrar transacciones financieras.
*/

// Librerias Necesarias
#include <iostream>
#include <vector>
#include <string>
using namespace std;


//Estructura para almacenar transacciones
struct Transaccion {
    double monto;
    string descripcion;
    string tipo; // "ingreso" o "gasto"
};

//Prototipo de la funcion
void agregarIngresoBOB(vector<Transaccion>& tx_bob, double& s_bob);

/*----------------------------------------------------------------------------------------------
void => Significa que esta funcion no devuelve ningun valor directamente cuando termina
-
agregarIngresoBOB => Es el nombre de la funcion
-
vector<Transaccion>& tx_bob => Indica que la funcion recibe una referencia al vector original 
transacciones_bob que está en main. Cualquier cambio a tx_bob dentro de la función afectará directamente a transacciones_bob.
-
double& s_bob => indica que la función recibe una referencia al saldo original saldo_bob.
----------------------------------------------------------------------------------------------*/

//Empieza el main
int main(){
    cout << "Bienvenido a billetera CATACORA" << endl;
    vector<Transaccion> transacciones_bob;
    vector<Transaccion> transacciones_usdt;
    double saldo_bob = 0.0;
    double saldo_usdt = 0.0;

    cout << "Catacora esta listo para ayudarte con tus finanzas" << endl;

    int opcion_menu = 0;
    do{
        cout << "\n ---Billetera CATACORA---" << endl;
        cout << "1. Añadir Ingreso => (BOB)" << endl;
        cout << "2. Añadir Ingreso => (USDT)" << endl;
        cout << "3. Añadir Gasto => (BOB)" << endl;
        cout << "4. Añadir Gasto => (USDT)" << endl;
        cout << "5. Ver saldos" << endl;
        cout << "6. Agregar una nueva billetera/moneda" << endl;
        cout << "7. Documentacion y Informacion acerca de este proyecto" << endl;
        cout << "8. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion_menu; 

        //Recordatorio Teorico: Para comparar cosas en c++ se usa ==
        if (opcion_menu == 1) {
            cout << "Elegiste: Añadir un ingreso en bolivianos (BOB)" << endl;
        }
        else if (opcion_menu == 2) {
            cout << "Elegiste: Añadir un ingreso en crypto-dolares (USDT)" << endl;
        }
        else if (opcion_menu == 3){
            cout << "Elegiste: Añadir un gasto en bolivianos (BOB)" << endl;
        }
        else if (opcion_menu == 4){
            cout << "Elegiste: Añadir un gasto en crypto-dolares (USDT)" << endl;
        }
        else if (opcion_menu == 5){
            cout << "Elegiste: Ver los saldos de tus billeteras" << endl;
        }
        else if (opcion_menu == 6){
            cout << "Elegiste: Agregar una nueva billetera/moneda a CATACORA" << endl;
        }
        else if (opcion_menu == 7){
            cout << "Elegiste: Ver la documentacion y informacion de este proyecto" << endl;
        }
        else if (opcion_menu == 8){
            cout << "Saliendo de la billetera. Adios!" << endl;
        }
        else{
            cout << "Opcion no valida. Intente de nuevo" << endl;
        }
    } while(opcion_menu != 8);

    cout << "Programa terminado exitosamente. Gracias por usar CATACORA." << endl;
    return 0;
}

