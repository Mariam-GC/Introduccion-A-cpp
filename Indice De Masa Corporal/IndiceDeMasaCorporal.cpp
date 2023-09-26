#include <iostream>
#include <ostream>
using namespace std;
/*Escribir un programa que calcule el Indice de Masa Corporal de un individuo, solicitando su peso y su estatura.
si el peso < 0 // while

Si el IMC es menor a 20 indique "Peligro, estas bajo de peso"
Si el IMC esta entre 20 y 25 indique "Felicidades estas en tu peso"
Si el IMC esta entre 25 y 30 (sin incluir a 30) indique "Tienes sobrepeso"
Si el IMC esta entre 30 y 35 (sin incluir a 35) indique "tienes obesidad"
Si el IMC es mayor o igual a 35 indique "Tienes obesidad morbida"

Repita el proceso tantas veces como el usuario lo desee // do while
Al final indique cuantas personas se encontraron en cada rango de peso // contador
Nota:
Permita únicamente la captura de pesos y estaturas mayores a 0 */
int main(int argc, char const *argv[])
{
    float peso;
    float estatura;
    int contadorBajo=0;
    int contadorIdeal=0;
    int contadorSobrepeso=0;
    int contadorObesidad=0;
    int contadorObesidadMorbida=0;
    int respuesta;

    do
    {
        cout<<"Ingese su peso: "<<endl;
        cin >> peso;
        cout<< "Ingrese su estatura en metros: "<<endl;
        cin >> estatura;
        float imc = (peso)/((estatura*estatura));
        cout <<"su indice de masa corporal es igual a: "<< imc;
        
         if (imc<20) { 
             cout <<"Peligro, estas bajo de peso"<< endl;
             contadorBajo++;
             cout << "desea contunuar? (Oprimiir 1 para continuar, 2 para finalizar)"<<endl;
             cin >> respuesta;
             }
        else if (imc>=20 && imc<25) {
            cout << " Felicidades estas en tu peso ideal "<< endl;
            contadorIdeal++;
            cout << "desea contunuar? (Oprimiir 1 para continuar, 2 para finalizar)"<<endl;
            cin >> respuesta;
        } 
        else if (imc >= 25 && imc <30) {
            cout <<" Tienes sobrepeso "<< endl;
            contadorSobrepeso++;
            cout << "desea contunuar? (Oprimiir 1 para continuar, 2 para finalizar)"<<endl;
            cin >> respuesta;
            }
        else if (imc >=30 && imc <35 ) {
             cout << " Tienes obesidad "<< endl;
             contadorObesidad++;
             cout << "desea contunuar? (Oprimiir 1 para continuar, 2 para finalizar)"<<endl;
             cin >> respuesta;
             }
         else if (imc>=35) {
             cout<< " Tienes obesidad morbida "<<endl;
             contadorObesidadMorbida++;
             cout << "Desea contunuar? (Oprimiir 1 para continuar, 2 para finalizar)"<<endl;
             cin >> respuesta;
             }
         else {
             cout<<" Los datos introducidos son incorrectos"<<endl;
             respuesta = 1;
             }
    }
    while( (respuesta==1)&&(peso > 0 && estatura > 0));
    
    cout << "RESULTADOS"<<endl;
    cout << "Personas con bajo peso: "<<contadorBajo<<endl;
    cout << "Personas con peso ideal: "<<contadorIdeal<<endl;
    cout << "Personas con sobre peso: "<<contadorSobrepeso<<endl;
    cout << "Personas con obesidad: "<<contadorObesidad<<endl;
    cout << "Personas con obesidad morbida: "<<contadorObesidadMorbida<<endl;
    cout << "FIN DEL PROGRAMA"<<endl;
    return 0;
    }
    


    

