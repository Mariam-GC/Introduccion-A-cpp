#include <iostream>
using namespace std;

int main()
{
    /*Escribir un programa que solicite 2 números y que también solicite la suma de los dos, el programa deberá validar si la suma proporcionada es correcta o incorrecta

    ejemplo

    Escriba un número: 2
    Escriba un segundo número: 2
    Escriba la suma de los dos números que proporcionó: 5

    La suma es incorrecta*/
    int num1;
    int num2;
    int suma;
    
    cout << "Ingrese un número"<< endl;
    cin >> num1;
    cout << "Ingrese otro número"<< endl;
    cin >> num2;
    cout << "Ingrese la suma de los dos numeros proporcionados anteriormente"<< endl;
    cin >> suma;

    if(suma == num1 + num2)
    {
        cout << "La suma es correcta y es igual a: " << + suma<<endl;

    }
    else {
        cout << "Incorrecto, la suma de sus numeros es: " << + (num1+num2);
    }
    
    /* code */
    return 0;
}
