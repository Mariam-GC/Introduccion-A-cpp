#include <iostream>
#include <math.h>
using namespace std;

// 2.- Escribir un programa que muestre en pantalla los cuadrados de los diez primeros números naturales
int main(int argc, char const *argv[])
{
    static int numero;
    
    for(int numero = 0; numero <= 10; numero++)
    {
        int CuadradoDeNumero = numero*numero;
        cout << CuadradoDeNumero << endl ;
    }
    
    return 0;
}
