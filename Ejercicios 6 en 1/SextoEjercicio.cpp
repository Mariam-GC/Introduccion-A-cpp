#include <iostream>
using namespace std;
/*6.- Escribir un programa que solicite 1 número y que imprima
la tabla de multiplicar de dicho número*/
int main(int argc, char const *argv[])
{
    int numero;
    int a = 0;
    
    cout <<"Ingese el numero de la tabla de multplicar que quiere que se le proporcione"<<endl;8
    
    cin >> numero;
    cout << "La tabla de el numero "<< numero <<" es: "<< endl;

    while (a<10) {
        int muliplicacion = numero*a;
        cout << numero << "x" << a << "="<< muliplicacion << endl;
        a = a+1;
        }
    return 0;
}
