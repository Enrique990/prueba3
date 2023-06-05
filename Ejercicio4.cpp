/*Ejercicio: Números primos
 Descripción: Escribe un programa que reciba como entrada un número entero y determine si es
 primo o no.
 Requisitos:
 - Utilizar una función para verificar si un número es primo.
 - Utilizar una bifurcación para manejar el caso de un número primo o no primo.
 - Utilizar un ciclo para comprobar si el número es divisible por otros números.
*/

#include<iostream>
using namespace std;

int numPrimo(int num);

int main()
{
    int numero=0;
    cout << "ingrese un numero: ";
    cin >> numero;
    numPrimo(numero);
    return 0;
}

int numPrimo(int num){
    if (num ==0||num ==1 ||num ==4)
    cout << "El numero no es primo";
    return 0;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0){
            cout << "El numero no es primo";
            return 0;
        }else cout << "El numero es es primo";
            return 1; 
    }
}