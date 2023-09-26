#include <iostream>
using namespace std;
int main()
{
    int num;
    cout <<" Introduzca un número ";
    cin >> num;

    switch (num) {
        case 0: cout << " Es un CERO " << endl;
        break;
        case 1: cout << " Es un UNO " << endl;
        break;
        default: cout <<" No es CERO ni UNO"<< endl;
    }

    return 0;
}