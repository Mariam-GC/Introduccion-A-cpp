#include <iostream>
using namespace std;
/*Escriba un programa que de como resultado
la siguiente salida: se deberá preguntar de cuanto quiere su matriz 

. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .*/
int main(int argc, char const *argv[])
{
    string punto  = ".";
    int filas;
    int columnas;

    cout << "Ingresa cuantas filas quieres: ";
    cin >> filas ;

    cout << "Ingresa cuantas columnas quieres: ";
    cin >> columnas;

    for (int i = 1; i <= filas; i++){
        cout<<endl;
        for (int j = 1; j <= columnas; j++ ){
            cout<< " " << punto;
        }
    }
    
    return 0;
}
