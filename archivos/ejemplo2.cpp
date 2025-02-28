#include <iostream>
#include <fstream> 
#include <string> // necesaria para usar string
using namespace std;
int main(){
    //crear un objeto de tipo ofstream para escribir en el archivo
    ifstream archivoEntrada;
    // abrir el archivo
    archivoEntrada.open("ejemplo.txt");
    // verificar si el archivo se abrio correctamenete
    if (archivoEntrada.is_open()){
        string linea;
        // leer archivo linea por linea
        while (getline(archivoEntrada, linea)){
            cout << "Leido: " <<linea << endl;
        }
        // cerrar el archivo
        archivoEntrada.close();
    } else{
        cout << "No se pudo abrir el archivo." <<endl;
    }
    return 0;
}