#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de conductores: ";
    cin >> n;
    
    vector<string> nombre(n);
    vector<vector<int>> kms(n, vector<int>(7)); 
    vector<int> total_kms(n, 0);
    
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del conductor " << i + 1 << ": ";
        cin >> nombre[i];
        cout << "Ingrese los kilometros recorridos en los 7 dias:\n";
        for (int j = 0; j < 7; j++) {
            cin >> kms[i][j];
            total_kms[i] += kms[i][j];
        }
    }
    
    int max_kms = total_kms[0], posicion_max = 0;
    for (int i = 1; i < n; i++) {
        if (total_kms[i] > max_kms) {
            max_kms = total_kms[i];
            posicion_max = i;
        }
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (total_kms[i] < total_kms[j]) {
                int temp = total_kms[i];
                total_kms[i] = total_kms[j];
                total_kms[j] = temp;
                
                string tempNombre = nombre[i];
                nombre[i] = nombre[j];
                nombre[j] = tempNombre;
            }
        }
    }
    

    for (int i = 0; i < n; i++) {
        cout << "\nConductor: " << nombre[i] << "\n";
        cout << "Kilometros recorridos:\n";
        for (int j = 0; j < 7; j++) {
            cout << "Dia " << j + 1 << ": " << kms[i][j] << " km\n";
        }
        cout << "Total de kilometros recorridos: " << total_kms[i] << " km\n";
    }
    
    cout << "\nEl conductor con mas kilometros recorridos es: " << nombre[0] << " con " << total_kms[0] << " km\n";
    
    cout << "\nRepresentacion grafica:\n";
    for (int i = 0; i < n; i++) {
        cout << nombre[i] << " (" << total_kms[i] << " km): ";
        for (int j = 0; j < total_kms[i] / 10; j++) {
            cout << "-";
        }
        cout << "\n";
    }
    
    return 0;
}
