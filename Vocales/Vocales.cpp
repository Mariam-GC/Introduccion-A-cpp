#include <iostream>
using namespace std;

// Escribir un programa que solicite una vocal minúscula y regrese la misma vocal, pero mayúscula
// Nota: Si el dato introducido no es una vocal en minúscula, se mostrará el mensaje: "ERROR: la letra no es una vocal minúscula.".
char vocal;
int main(int argc, char const *argv[])
{cout << "Insrte una vocal en minuscula\n";
cin >> vocal;
switch (vocal) {

case 'a': cout<< "Su vocal es  :\nA";
break;
case 'e':cout << "Su vocal es :\nE";
break;
case 'i':cout << "Su vocal es :\nI";
break;
case 'o':cout << "Su vocal es :\nO";
break;
case 'u':cout << "Su vocal es :\nU";
break; 
default: cout << "ERROR: la letra no es una vocal minuscula.";
}


    /* code */
    return 0;
}