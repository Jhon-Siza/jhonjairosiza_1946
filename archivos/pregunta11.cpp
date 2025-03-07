#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ordenarCadenaPorLongitud(const string& cadena) {
    vector<string> palabras;
    string palabra;
    
    for (char c : cadena) {
        if (c == ' ') {
            palabras.push_back(palabra);
            palabra.clear();
        } else {
            palabra += c;
        }
    }
    palabras.push_back(palabra);

    for (size_t i = 0; i < palabras.size() - 1; i++) {
        for (size_t j = i + 1; j < palabras.size(); j++) {
            if (palabras[i].length() < palabras[j].length()) {
                swap(palabras[i], palabras[j]);
            }
        }
    }

    string resultado;
    for (size_t i = 0; i < palabras.size(); i++) {
        resultado += palabras[i];
        if (i < palabras.size() - 1) resultado += " ";
    }

    return resultado;
}

int main() {
    string cadenaOriginal = "uno quince doce";
    string cadenaResultado = ordenarCadenaPorLongitud(cadenaOriginal);

    cout << "Cadena original: " << cadenaOriginal << endl;
    cout << "Cadena resultado: " << cadenaResultado << endl;

    return 0;
}