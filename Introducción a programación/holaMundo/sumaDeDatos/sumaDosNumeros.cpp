#include "iostream"
using namespace std;
int main()
{
    float num1, num2;
    cout << "Hola! Aquí podras realizar sumas" << endl;
    cout << "Por favor ingrese el primer valor: " << endl;
    cin >>num1;

    cout << "Por favor ingrese el segundo valor: "<< endl;
    cin >> num2;

    cout << "El resultado de la suma de ";
    cout << num1 << " + " << num2;
    cout << " es: " << num1+num2 << endl;


    return 0;
}
