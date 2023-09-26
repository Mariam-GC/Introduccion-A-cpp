#include <iostream>
using namespace std;
/*Escribir un programa que solicite dos números entre 10 y 20 y el programa los multiplique y regrese el resultado

Al terminar el programa deberá preguntar si desea multiplicar nuevos números, si contesta "s" deberá solicitar de nuevo los números si contesta "n" termina el programa

Nota: si los números proporcionados son menores que 10 o mayores
a 20 el programa deberá mostrar un mensaje de error y solicitar de nuevo los números hasta que sean correctos*/
int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int multiplicacion;
    char respuesta;
    
    do {
        cout << "ingrese un numero entre el 10 y el 20"<< endl;
        cin >> num1;
        cout << "ingrese otro un numero entre el 10 y el 20"<< endl;
        cin >> num2;
        if ((num1 >=10 && num1<= 20) && (num2 >=10 && num2<=20)) {
            multiplicacion = num1*num2;
            cout << "La multiplicacion de sus numeros es:"<< multiplicacion<<endl;
            cout<<"Desea continuar?"<<endl;
            cout<<"ingrese 's' para continuar o 'n' para finaizar"<< endl;
            cin>> respuesta;
        }
        else 
        {
            cout<< "Los numeros ingresados no corresponden a las especificaciones"<<endl;
            respuesta = 's';
        }
        
    
    }
    while (respuesta == 's'|| respuesta == 'S');
    cout<<"FIN DEL PROGRAMA, GRACIAS POR PARTICIPAR";
    return 0;
    }
 