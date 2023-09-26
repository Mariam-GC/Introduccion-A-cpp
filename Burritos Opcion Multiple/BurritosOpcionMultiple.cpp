
#include <iostream>
using namespace std;
int main()
/*Escribir un programa que calcule el total a cobrar en la venta de burritos, debe solicitar la cantidad de burritos y el tipo, también deberá mostrar un menú de opciones con los tipos de burritos

Menú Precio

1) Deshebrada Rojo 1 pesos
2) Deshebrada Verde 2 pesos
3) Chicharrón 3 pesos
4) Mole 4 pesos
5) Discada 5 pesos
6) Chile Relleno 6 pesos*/
{
    int burrito_Deshebrada_Rojo = 1;

    int contadorBurritos = 0;
    int burrito_Deshebrada_Verde = 2;
    int burrito_Chicharron = 3;
    int burrito_Mole = 4;
    int burrito_Discada = 5;
    int burrito_Chile_Relleno = 6;
    int numeroDeBurritos = 1;
    //pendiente
    int burrito_Deshebrada_Rojo_Total;
    int burrito_Deshebrada_Verde_Total;
    int burrito_Chicharron_Total;
    int burrito_Mole_Total;
    int burrito_Discada_Total;
    int burrito_Chile_Relleno_Total;
    int numeroDeBurritos_Total;
    
    cout <<"Bienvendio a la fonda de burritos Dona Mariam " << endl;
    cout <<"Nuestro menu es: "<< endl;
    cout <<"Deshebrada Rojo 1 pesos"<< endl;
    cout <<"Deshebrada Verde 2 pesos"<< endl;
    cout <<"Chicharron 3 pesos"<< endl;
    cout <<"Mole 4 pesos"<< endl;
    cout <<"Disada 5 pesos"<< endl;
    cout <<"Chile relleno 6 pesos"<< endl << endl;

    switch (numeroDeBurritos) {
        case 1 : cout<<"¿Cuantos burritos de rojo quiere?"<<endl;
                cin >> burrito_Deshebrada_Rojo_Total;
        case 2 : cout<<"¿Cuantos burritos de verde?"<<endl;
                cin >> burrito_Deshebrada_Verde_Total;
        case 3 : cout<<"¿Cuantos burrito chicharron?"<<endl;
                cin >> burrito_Chicharron_Total;
        case 4 : cout<<"¿Cuantos burrito mole?"<<endl;
                cin >> burrito_Mole_Total;
        case 5 : cout<<"¿Cuantos burrito discada?"<<endl;
                cin >> burrito_Discada_Total;
        case 6 : cout<<"¿Cuantos burrito chile relleno?" <<endl;
                cin>> burrito_Chile_Relleno_Total;
        break;
    }

    cout<<"El total a pagar es = "<< + ((burrito_Deshebrada_Rojo * burrito_Deshebrada_Rojo_Total) + (burrito_Deshebrada_Verde*burrito_Deshebrada_Verde_Total) + (burrito_Chicharron*burrito_Chicharron_Total) + (burrito_Mole*burrito_Mole_Total) + (burrito_Discada*burrito_Discada_Total) + (burrito_Chile_Relleno*burrito_Chile_Relleno_Total));
}