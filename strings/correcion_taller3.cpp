#include <iostream>
#include <string>

using namespace std;

void reemplazarCadena() {
    std::string cadena, objetivo, porcion; //ingresaamos las 3 std::strings en una sola para optimizar el codigo
    
    std::cout << "Ingrese la cadena original: "; //aqui podemos ingresar cualquier cadena, caracter
    std::getline(std::cin, cadena);

    std::cout << "Ingrese la porcion substituible: "; //eleigmos de la parte o porcion que queremos reemplzar de la cadena que ingrsamos originalmente
    std::getline(std::cin, objetivo);

    std::cout << "Ingrese la nueva porcion substituida: "; //aqui podemos ingresar cualquier cadena, caracter para reemplzar
    std::getline(std::cin, porcion);

    int pos = cadena.find(objetivo);  
    if (pos != std::string::npos) {
        cadena.replace(pos, objetivo.size(), porcion);  
        std::cout << "Cadena modificada: " << cadena << std::endl;
    } else {
        std::cout << "La porcion susbstituible no se encontró en la cadena original" << std::endl;
    }
}

main() {
    reemplazarCadena();
    return 0;
}
