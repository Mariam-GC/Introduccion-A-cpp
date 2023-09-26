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
    char m [10][10];

    cout << "MATRIZ DE PUNTOS" << endl;
    for (int i = 0; i < 10; i++){
        for(int j = 0; j< 10; j++)
        {
           m[i][j] = '.';
        }
    }
    for (int i = 0; i < 10; i++){
        for(int j = 0; j< 10; j++)
        {
           m[i][j] = '.';
        }
        cout<< "  "<< endl;
    }
    return 0;
}
