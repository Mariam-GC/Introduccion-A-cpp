#include <algorithm>
#include <math.h>
#include <ctype.h>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main()

{
  const float precioRojo = 5.50;
  const float precioVerde = 10;
  const float precioChich = 10.50;

  int burritosRojo;
  int burritoVerde;
  int burritoChich;
  int totalBurritos;
  float subtotal = 0;
  float descuento;
  float total;
  int redondeo;

  cout << " Menu de burritos \n";
  cout << "\n Burritos de Rojo  $5.50";
  cout << "\n Burritos de Verde $10";
  cout << "\n Burritos de Chicharron 10.50";

  cout << "\n Cuantos burritos de rojo va a llevar?: ";
  cin >> burritosRojo;

  cout << "\n Cuantos burritos de Verde va a llevar?: ";
  cin >> burritoVerde;

  cout << "\n Cuantos burritos de Chicharron va a llevar?: ";
  cin >> burritoChich;

  subtotal = (burritosRojo * precioRojo) + (burritoVerde * precioVerde) + (burritoChich * precioChich);
  totalBurritos = burritosRojo + burritoVerde + burritoChich;

  cout << "\n subtotal $ " << subtotal;
  total = subtotal;

  //** COMPLETAR **

  // SI total de burritos >= a 10 YY total de burritos < a 20
  // Entonces total = subtotal - 5 porciento
  // Imprimir mensaje con el descuento del 5%
  if (totalBurritos >= 10 && totalBurritos < 20)
  { 
    cout << " Se le aplicará el 5% de descuento" << endl;
    total =  subtotal - (total * .05);
  }
  // SI total de burritos > a 20
  // Entonces total = subtotal - 10 porciento
  // Imprimir mensaje con el descuento del 10%
  else if (totalBurritos > 20) {
    cout << " Se le aplicará un descuento del 10%"<< endl;
    total = subtotal - (total * .10);
  }
  else 
  {
    cout <<" No se le aplicará descuento, una disculpa :)"<< endl;
    
  } // Preguntar si desea redondear, en caso de ser sí, redondear y en caso de ser no, no redondear
  cout << "¿Desea rendondear sus centavos, ESCRIBA 1 PARA SI O 2 PARA NO?"<< endl; 
  cin >> redondeo;

  if (redondeo==1){
    total = ceil(total);
  }
  else if (redondeo==2) {
    total = total;
    cout << "Gracias por su compra" << endl;
  }
  else 
  {
    cout<< " Esa no es nunguna opción" << endl;
  }

  cout << "\n Su total es de $" << total;
 

  return 0;
}