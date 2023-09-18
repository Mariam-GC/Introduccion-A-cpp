#include <iostream>
using namespace std;
/*Escribir un programa que solicite un número diferente de 0 y que calcule la mitad y lo muestre en pantalla de la siguiente forma

Proporcione un numero: 4
La mitad es: 2

Proporcione un numero: 8
La mitad es: 4

Proporcione un numero: 0
Usted solicito 2 numeros
Gracias vais.

Nota: deberá utilizar un bucle para estar solicitando números y mostrando el resultado hasta que se introduzca un número 0. Cuando termine el programa deberá mostrar cuantas veces se introdujo un número distinto de cero*/
int main(int argc, char const *argv[])
{
    int numero;
    float mitadDeNumeros;
    int contador;
    do {
        cout << "proporcione un numero"<<endl;
        cin >> numero;
        cout <<"Numero ingresado: "<< numero << endl;
        float mitadDeNumero = (numero*.5);
        cout << "la mitad es: "<< mitadDeNumero<< endl;
        contador = contador+1;
        } while(numero!= 0);
        
        cout<<"el total de numeros proporcionados es:"<< contador;
        
    return 0;
}

