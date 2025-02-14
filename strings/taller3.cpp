#include <iostream>
#include <string>

using namespace std;

void reemplazarCadena() {
    std::string cadena{"juan es mi amigo"};
    std::cout << "Cadena original: " << cadena << std::endl;
    
    std::string objetivo, porcion;
    
    std::cout << "Ingrese la cadena sustituible: ";
    std::getline(cin, objetivo);

    std::cout << "Ingrese la nueva sustituible: ";
    std::getline(cin, porcion);

    int pos = cadena.find(objetivo);  
    if (pos != std::string::npos) {
        cadena.replace(pos, objetivo.size(), porcion);  
        std::cout << "Cadena modificada: " << cadena << std::endl;
    } else {
        std::cout << "La sustituible no se encontró en la cadena original." << std::endl;
    }
}

int main() {
    reemplazarCadena();
    return 0;
}
