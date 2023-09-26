#include <iostream>
using namespace std;
/*5.- Escribir un programa que solicite 2 números y te diga cuantos
números hay entre esos dos y ademas que los muestre*/
int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int cantidadDeNumeros= num2 - num1;
    
    cout << "introduce un numero"<< endl;
    cin >> num1;
    cout << "introduce otro numero mayor que el anterior"<< endl;
    cin >>  num2;
    //Comprobar si num1 es menor que num2
    if(num1<num2)
    { 
        //Calcular la cantidad total de números entre ellos
        cout << "La cantidad total de numeros entre"<<num1<<" y"<< num2 <<" es:"<< endl;
        cout << cantidadDeNumeros<< endl;
        cout << "los numeros entre"<< num1 <<" y"<< num2<< " son:"<< endl;
        //Los numeroa que existen entre los ingresados
        int numeroActual = num1 + 1;
        while(numeroActual< num2){
            cout << numeroActual<<endl;
            numeroActual++;
        }
    }
    else 
    { 
        cout<< "los numeros ingresados no cumplen con los requisitos pedidos.";
    }
    return 0;
}
    
   

    

