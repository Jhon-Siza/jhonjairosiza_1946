#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../../librerias/arrays.h"

using namespace std;

void verDatos(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << "\t";
    }
    cout << endl;
}

bool isBusquedaBinaria(int v[], int n, int elemento) {
    int Iabajo = 0, Iarriba = n - 1, Icentro;
    
    while (Iabajo <= Iarriba) {
        Icentro = Iabajo + (Iarriba - Iabajo) / 2;
        
        if (v[Icentro] == elemento) {
            return true;
        } else if (v[Icentro] < elemento) {
            Iabajo = Icentro + 1;
        } else {
            Iarriba = Icentro - 1;
        }
    }
    return false;
}

int main() {
    srand(time(0));
    int ne = 10, dato;
    int vector[ne];
    
    llenarVector(vector, ne, 0, 10);
    ordenaBurbujav3(vector, ne);
    
    cout << "Bienvenido al juego de adivinar el número!" << endl;
    cout << "Intenta adivinar un número entre 0 y 10." << endl;
    
    verDatos(vector, ne);
    
    while (true) {
        cout << "\nIngrese su suposición: ";
        cin >> dato;
        
        if (isBusquedaBinaria(vector, ne, dato)) {
            cout << "¡Felicidades! Has adivinado un número dentro del rango." << endl;
            break;
        } else {
            cout << "Número incorrecto, intenta nuevamente." << endl;
        }
    }
    
    return 0;
}
