#include <corecrt_math.h>
#include <iostream>
using namespace std;
// Relaliza una funcion que calcule el factorial de un numero
int factorial(int n);

int main(int argc, char const *argv[])
{
    int n = factorial(5);
    cout << "El factorial es "<< n << endl;
    
}
int factoial (int n){
    int fact;
    fact = 1;
    for (int i = 1; i <= n; i++ ){
        fact = fact * i;
    }
    return fact;
}