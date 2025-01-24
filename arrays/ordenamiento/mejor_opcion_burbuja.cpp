//https://github.com/Jhon-Siza/jhonjairosiza_1946
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenarVector(int v[], int n){
    srand(time(NULL));
    for(int i=0; i<n; i++){
        cin >> v[i];  
    }
}

int ordenaBurbujav1(int v[], int n){
    int aux, contador=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            contador++;
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    return contador;
}

int ordenaBurbujav2(int v[], int n){
    int mejora = 1;
    int aux, contador = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-mejora; j++){
            contador++;
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenaBurbujav3(int v[], int n){
    int mejora = 1;
    bool cambio = true;
    int aux, contador = 0;
    for(int i=0; i<n && cambio; i++){
        cambio = false;
        for(int j=0; j<n-mejora; j++){
            contador++;
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                cambio = true;
            }
        }
        mejora++;
    }
    return contador;
}

void muestraVector(int v[], int n){
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void mejorOpcionBurbuja(int v[], int n){
    int v1 = ordenaBurbujav1(v, n);  
    int v2 = ordenaBurbujav2(v, n);  
    int v3 = ordenaBurbujav3(v, n);  

    cout << "El nro de comparaciones burbuja v1: " << v1 << endl;
    cout << "El nro de comparaciones burbuja v2: " << v2 << endl;
    cout << "El nro de comparaciones burbuja v3: " << v3 << endl;

    if (v1 <= v2 && v1 <= v3) {
        cout << "La mejor opcion es la version 1 " << endl;
    } else if (v2 <= v1 && v2 <= v3) {
        cout << "La mejor opcion es la version 2 " << endl;
    } else {
        cout << "La mejor opcion es la version 3 " << endl;
    }
}

int main(){
    int ne;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenarVector(vec, ne);
    cout << "Vector original: ";
    muestraVector(vec, ne);
    mejorOpcionBurbuja(vec, ne);
    cout << "\nVector ordenado: " << endl;
    muestraVector(vec, ne);
}