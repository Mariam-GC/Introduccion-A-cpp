#include <iostream>
using namespace std;
int main()
{
    /*Escribir un programa que solicite un número entero y que regrese el nombre correspondiente al mes

    Nota: si el número es menor a 1 o mayor a 12 debe mostrar un error

    ejemplo:

    Introduzca el numero del mes: 4
    El mes es: Abril*/
    int num;
    cout <<" Introduzca un número entero que corresponda al número de un mes ";
    cin >> num;

    switch (num) {
        case 0: cout << " Ningun mes del año " << endl;
        break;
        case 1: cout << " El numero ingresado corresponde al mes de ENERO " << endl;
        break;
        case 2: cout << " El numero ingresado corresponde al mes de FEBRERO " << endl;
        break;
        case 3: cout << " El numero ingresado corresponde al mes de MARZO" << endl;
        break;
        case 4: cout << " El numero ingresado corresponde al mes de ABRIL" << endl;
        break;
        case 5: cout << " El numero ingresado corresponde al mes de MAYO" << endl;
        break;
        case 6: cout << " El numero ingresado corresponde al mes de JUNIO" << endl;
        break;
        case 7: cout << " El numero ingresado corresponde al mes de JULIO" << endl;
        break;
        case 8: cout << " El numero ingresado corresponde al mes de AGOSTO" << endl;
        break;
        case 9: cout << " El numero ingresado corresponde al mes de SEPTIEMBRE" << endl;
        break;
        case 10: cout << " El numero ingresado corresponde al mes de OCTUBRE" << endl;
        break;
        case 11: cout << " El numero ingresado corresponde al mes de NOBIEMBRE" << endl;
        break;
        case 12: cout << " El numero ingresado corresponde al mes de DICIEMBRE" << endl;
        break;
        default: cout <<" El número ingresado no corresponde a nungun mes del año"<< endl;
    }

    return 0;
}