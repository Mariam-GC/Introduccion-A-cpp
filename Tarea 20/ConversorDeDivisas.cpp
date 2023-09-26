#include <iostream>
using namespace std;
/*Escribir un programa que realice conversiones de pesos a dólares y viceversa
Nota: deberá escribir dos funciones una para pesos a dólares y la otra de dolares a pesos
El programa debe solicitar al usuario el tipo de cambio y la cantidad*/
float peso = 17.47;
float dolar = .057;
int respuesta;
float cantidad;
float total;
void convertirPesoADolar(float dolar);
void convertirDolarAPeso(float peso);


int main(int argc, char const *argv[])
{
    cout << "**CONVERSOR DE DIVISAS**"<<endl;
    cout << "Que tipo de cambio desea solicitar?"<<endl;
    cout << "1 para convertir peso a dolar"<< endl <<"2 para convertir dolar a peso"<<endl;
    cin >> respuesta;
    cout << "Ingrese cantidad cantidad que desea convertir: "<< endl;
    cin >> cantidad;

    if(respuesta == 1)
    {
        convertirPesoADolar(dolar);
    }
    else if (respuesta == 2) {
        convertirDolarAPeso( peso);
    
    }
    else 
    {
        cout<<"DATO INTRODUCIDO INCORRECTO"<< endl <<"FIN DEL PROGRAMA";
    } 

    return 0;
}

void convertirPesoADolar(float dolar){

    total = cantidad*dolar;
    cout << "tiene " << cantidad << " pesos " << "que son: " << total <<" dolares"<< endl;
    cout << "FIN DEL PROGRAMA";
}

void convertirDolarAPeso(float peso){
    total = cantidad*peso;
    cout << "tiene " << cantidad << " pesos " << "que son: " << total << " pesos"<< endl;
    cout << "FIN DEL PROGRAMA";
}
