#include <iostream>
using namespace std;

string obtenerCategoria(int valor) {
    // Usamos un arreglo de categorías donde cada rango tiene su categoría
    string categorias[] = {"deficiente", "deficiente", "deficiente", "deficiente", "deficiente", 
                           "regular", "regular", "regular", "regular", "regular", 
                           "bueno", "bueno", "bueno", "bueno", "bueno", 
                           "muy bueno", "muy bueno", "muy bueno", 
                           "excelente", "excelente"};

    return (valor >= 1 && valor <= 20) ? categorias[valor - 1] : "Valor fuera de rango";
}

int main() {
    int valor;
    cout << "Introduce un valor entre 1 y 20: ";
    cin >> valor;
    cout << "La categoria es: " << obtenerCategoria(valor) << endl;

    return 0;
}
