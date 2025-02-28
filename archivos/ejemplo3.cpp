#include <iostream>
#include <fstream> 
using namespace std;
int main() {
    //crear un objeto de tipo ofstream
    ofstream archivoSalida;
    //Abir el archivo en modo "append" (agregar al final)
    archivoSalida.open("ejemplo.txt", ios::app);
    //verificar si el archivo se abrio correctamente
    if (archivoSalida.is_open()){
        archivoSalida << "Linea agregada al final." <<endl;
        archivoSalida << "Otra linea mas." <<endl;
        archivoSalida.close();
        cout << "Texto agregado con exito." <<endl;
    } else{
        cout << "No se pudo abrir el archivo." <<endl;
    }
    return 0;
}
  