#include <iostream>
/*4.- Escribir un programa que cacule cuantos números impares hay
del 0 al 100*/
using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;
    int contador = 0;
    
    cout << "Los numeros impares que hay del 0 al 100 son:" << endl;
    while(numero <= 100){

        if(numero%2 != 0)
        {
            cout << numero<< endl;
            contador = contador+1;
        }
        numero++;}
        cout << "LOS NUMERO IMPARES QU HAY DEL 1 AL 100 SON:" << endl;
        cout << contador;

    return 0;
}