#include <iostream>
#include <istream>
using namespace std;
// Escribir un programa que calcule y visualice el mayor, el menor y el promedio de N números dados por el usuario.

// El valor de N se solicitará al principio del programa y posteriormente el usuario debe proporcionar los n valores.

// Notas:
// - No utilice arreglos, no es necesario conservar los N valores almacenados al mismo tiempo.
int main(int argc, char const *argv[])
{
    float numeroUsuario;
    float numeroMayor = 0;
    float numeroMenor = 9999999;
    float respuesta; 
    float sumaNumeros = 0;
    float totalNumerosIngresados;
    float promedio;

    do {
        cout << "ingrese un numero: "<<endl;
        cin >> numeroUsuario;
        sumaNumeros = numeroUsuario + sumaNumeros ;
        totalNumerosIngresados++;
        
        if ((numeroUsuario >= numeroMayor)) {
            numeroMayor = numeroUsuario;
        }
        if (numeroUsuario <= numeroMenor ) {
            numeroMenor = numeroUsuario;
        }
        

        cout<< "Desea continuar? (presione 1 para seguir o 2 para terminar)"<<endl;
        cin >> respuesta;


    
    }while (respuesta == 1);
    cout << "El numero mayor es: "<< numeroMayor<< endl;
    cout << "El numero menor es: "<< numeroMenor<<endl;
    promedio = (sumaNumeros/totalNumerosIngresados);
    cout << "La suma de los numeros ingresados es: "<< sumaNumeros << endl;
    cout << "el total de numeros ingresados es: "<<totalNumerosIngresados << endl;;
    cout << "El promedio de los numeros ingresados es: "<< promedio<< endl;
    return 0;
}
