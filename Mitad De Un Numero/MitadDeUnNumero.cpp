#include <iostream>
using namespace std;
// Escribir un programa que solicite un número diferente de 0 y que
// calcule la mitad y lo muestre en pantalla de la siguiente forma

// "La mitad de número es: mitad" 

// Nota: deberá utilizar un bucle para estar solicitando números
// y mostrando el resultado hasta que se introduzca un número 0 

// cuando termine el programa deberá mostrar cuantas veces se
// introdujo un número distinto de cero
int numero;
float mitadDeNumero;
int contador = 0;

int main(int argc, char const *argv[])
{

// Escribir un programa que solicite un número diferente de 0 
    cout << "Escriba un numero diferente de 0"<< endl;
    cin >> numero;
    float mitadDeNumero = (numero * .5);

while (numero!=0) {

// Que calcule la mitad y lo muestre en pantalla de la siguiente forma
// "La mitad de número es: mitad
    cout << "la mitad de " << + numero<< " es " << + mitadDeNumero << endl<<endl;
    cout<< "Inserte otro numero diferente de 0 "<< endl;
//mostrar cuantas veces se introdujo un número distinto de cero con la variable contador
    contador++;//NOTA: Tambien es correcto usar "contador + 1"
    cin>> numero;
    mitadDeNumero = (numero * .5);
}

// cuando termine el programa deberá mostrar cuantas veces se introdujo un número distinto de cero
cout<< "introdujo " << + contador << " numeros distintos de 0"

;
    return 0;
}


