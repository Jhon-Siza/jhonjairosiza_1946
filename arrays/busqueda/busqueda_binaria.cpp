#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../../librerias/arrays.h"
using namespace std;
using namespace vectorn;

bool isBusquedaBinaria(int v[], int n, int elemento){
    int arriba, abajo, centro;
    abajo = 0;
    arriba = n-1;
    while (abajo<=arriba){
        centro = (abajo+arriba)/2;
        if(v[centro]==elemento){
            return true;
        }else if(v[centro]<elemento){
            abajo = centro +1;
        }else{
            arriba = centro-1;
        }
    }
    return false;
}

main(){
    int ne, dato;
    cout << "Nro de Elementos del Array: ";
    cin >> ne;
    int vector[ne];
    llenarVector(vector, ne,20,50);
    cout << "Datos originales\n";
    verVector(vector, ne);
    cout<<"\nDatos ordenados\n";
    ordenaBurbujav3(vector, ne);
    verVector(vector, ne);
    cout<<"\nIngrese el dato a buscar: ";
    cin >> dato;
    (isBusquedaBinaria(vector, ne, dato))?cout << "Dato Encontrado":cout<<"Dato no encontrado";
}