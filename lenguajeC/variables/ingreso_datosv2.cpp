#include <iostream>
#include <stdio.h>
using namespace std;
main()
{
    int i;
    short valor;
    char letra;
    bool bandera;
    float peso;
    double altura;
    cout << "Ingresa un valor entero: \t";
    cin >> i;
    cout << "Ingresa una valor short: \t";
    cin >> valor;
    cout << "Ingresa un valor char: \t";
    cin.ignore();
    cin >> letra;
    cout << "Ingresa una valor boleano: \t";
    cin >> bandera;
    cout << "Ingresa un valor float: \t";
    cin >> peso;
    cout << "Ingresa una valor double: \t";
    cin >> altura;
    cout << "Ingresa un valor entero: \t";
    cout << "Valores ingresados: \n";
    cout << "El valor entero es " << i << endl;
    cout << "El valor short es " << valor << endl;
    cout << "El valor char es " << letra << endl;
    cout << "El valor booleano es " << bandera << endl;
    cout << "El valor float es " << peso << endl;
    cout << "El valor double es " << altura << endl;
}
