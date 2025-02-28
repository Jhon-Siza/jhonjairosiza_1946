#include <iostream>
#include <fstream> // Necesaria para manejar archivos
using namespace std;
int main(){
    // crear un objeto de tipo ofstream para escribir en el archivo
    ofstream archivoSalida;
    // abrir el archivo (si no existe, se creara)
    archivoSalida.open("ejemplo.txt");
    // verificar si el archivo se abrio correctamente
    if (archivoSalida.is_open()){
        // escribir texto en el archivo
        archivoSalida << "Hola, mundo!" << endl;
        archivoSalida << "Esto es una prueba." << endl;
        archivoSalida << "Linea 3." << endl;
        // cerrar el archivo
        archivoSalida.close();
        cout << "Texto escrito en el archivo con exito." <<endl;
    }else{
        cout << "No se pudo abrir el archivo." << endl;
    }
    return 0;
}