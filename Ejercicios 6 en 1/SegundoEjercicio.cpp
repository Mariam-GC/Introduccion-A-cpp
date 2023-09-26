#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int numero = 0;
// 2.- Escribir un programa que escriba los números pares del 0 al 100 
    while(numero <= 100){

        if(numero%2 == 0)
        {
            cout << numero<< endl;
        }
        numero++;
    }
    return 0;
}
