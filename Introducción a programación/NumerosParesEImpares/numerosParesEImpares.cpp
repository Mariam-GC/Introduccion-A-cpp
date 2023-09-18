#include <algorithm>
#include <math.h>
#include <ctype.h>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;
int main()
{

    int num1;
    cout << "ingrese un numero"<< endl;
    cin >> num1;
    if (num1 % 2 == 0)
    {
        cout << "el numero que eligió es = " << + num1 << " y es un numero par"<< endl;
    }

    else 
    {
        cout << "el numero que eligio es = " << + num1 << " y es un numero impar"<< endl;
    }
return 0;
}