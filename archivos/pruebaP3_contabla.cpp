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
    
    cout << "\n| Conductor         | Lunes | Martes | Miercoles | Jueves | Viernes | Sabado | Domingo | Total km |\n";
    cout << "|-------------------|-------|-------|-------|-------|-------|-------|-------|----------|\n";
    
    for (int i = 0; i < n; i++) {
        cout << "| " << nombre[i];
        for (int j = nombre[i].size(); j < 20; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < 7; j++) {
            cout << "| " << kms[i][j];
            for (int k = 0; k < 7 - to_string(kms[i][j]).size(); k++) {
                cout << " ";
            }
        }
        
        cout << "| " << total_kms[i];
        for (int k = 0; k < 9 - to_string(total_kms[i]).size(); k++) {
            cout << " "; 
        }
        cout << "|\n";
    }
    cout << "\n";
    
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

