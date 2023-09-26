#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    /*Escribir un programa que valide si la hora proporcionada es correcta, deberá solicitar tres números enteros que
    representan horas minutos y segundos.

    Nota: para que una hora sea válida, se tiene que cumplir lo siguiente

    Las horas deben ser mayor o igual que 0 y menor o igual que 23.
    Los minutos deben ser mayor o igual que 0 y menor o igual que 59.
    Los segundos deben ser mayor o igual que 0 y menor o igual que 59.*/

    int hour;
    int minute;
    int second;
    
    cout << "Ingrese una hora"<< endl;
    cin >> hour;
    cout << "Ingrese minutos"<<endl;
    cin >> minute ;
    cout << "ingrese segundos"<<endl;
    cin >> second;
    if((hour>=0 && hour <=23) && (minute >= 0 && minute<=59)&&(second>=0 && second<=59))
    {
        cout << "Su hora es = "<< + hour << + ":"<< + minute << + ":" << + second;
    }
    else {
    cout <<"Los datos ingresados son incorrectos";
    }
    

    return 0;
}

