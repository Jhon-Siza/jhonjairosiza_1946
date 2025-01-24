#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenarVector(int v[], int n) {
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        cin >> v[i];  // Para que el usuario ingrese los valores
    }
}

int ordenaBurbujav1(int v[], int n) {
    int aux, contador = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            contador++;
            if(v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    return contador;
}

int ordenaBurbujav2(int v[], int n) {
    int mejora = 1;
    int aux, contador = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - mejora; j++) {
            contador++;
            if(v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenaBurbujav3(int v[], int n) {
    int mejora = 1;
    bool cambio = true;
    int aux, contador = 0;
    for(int i = 0; i < n && cambio; i++) {
        cambio = false;
        for(int j = 0; j < n - mejora; j++) {
            contador++;
            if(v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                cambio = true;
            }
        }
        mejora++;
    }
    return contador;
}

void muestraVector(int v[], int n) {
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

int mejorOpcion(int v[], int n) {
    // Copiar el vector original en tres vectores para no modificar el original
    int v1[n], v2[n], v3[n];
    for(int i = 0; i < n; i++) {
        v1[i] = v[i];
        v2[i] = v[i];
        v3[i] = v[i];
    }

    // Ejecutar las tres versiones y contar las comparaciones
    int comparacionesV1 = ordenaBurbujav1(v1, n);
    int comparacionesV2 = ordenaBurbujav2(v2, n);
    int comparacionesV3 = ordenaBurbujav3(v3, n);

    // Determinar la mejor opción
    if(comparacionesV1 <= comparacionesV2 && comparacionesV1 <= comparacionesV3) {
        return 1;  // La versión 1 es la mejor
    } else if(comparacionesV2 <= comparacionesV1 && comparacionesV2 <= comparacionesV3) {
        return 2;  // La versión 2 es la mejor
    } else {
        return 3;  // La versión 3 es la mejor
    }
}

int main() {
    int ne;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenarVector(vec, ne);

    cout << "Vector original: ";
    muestraVector(vec, ne);
    cout << endl;

    // Comparar las tres versiones de burbuja
    int mejorVersion = mejorOpcion(vec, ne);

    cout << "La mejor versión de burbuja es: v" << mejorVersion << endl;

    return 0;
}
