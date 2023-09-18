#include <iostream>
using namespace std;
/*3.- Escribir un programa que escriba los números impares
del 0 al 100*/
int main(int argc, char const *argv[])
{
    int numero = 0;
    while(numero <= 100){

        if(numero%2 != 0)
        {
            cout << numero<< endl;
        }
        numero++;
    }
    return 0;
}