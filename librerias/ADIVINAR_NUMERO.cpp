#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "arrays.h"
using namespace std;
using namespace vectorn;

int escogeNumero(int v[], int ne){
    int n, i;;
    i = rand()%(ne);
    n = v[i];
    return n;
}


main(){
    int ne, ri, rs, numeroEscogido;
    cout << "Nro de elementos del Array: ";
    cin >> ne;
    int vector[ne];
    cout << "Rango inicial: ";
    cin >> ri;
    cout << "Rango superior: ";
    cin >> rs;
    llenarVector(vector, ne, ri, rs);
    verVector(vector, ne);
    cout << "\n";
    numeroEscogido = escogeNumero(vector, ne);
    int numero;
    while(numero != numeroEscogido){
        cout << "Introduce un numero: ";
        cin >> numero;
        if (numero > numeroEscogido){
            cout << "El numero es menor\n";
        } else if (numero < numeroEscogido){
            cout << "El numero es mayor\n";
        }
    }