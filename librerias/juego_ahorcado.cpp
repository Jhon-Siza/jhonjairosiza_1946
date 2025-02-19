#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../Librerias/ahorcado.h"

using namespace std;

string palabraAleatoria(string palabras[]) {
    srand(time(NULL));
    int numero = rand() % 5;
    return palabras[numero];
}

int opciones() {
    int op;
    cout << "1. Deportes" << endl;
    cout << "2. Animales" << endl;
    cout << "3. Frutas" << endl;
    cout << "Elige una categoria: ";
    cin >> op;
    return op;
}

void mostrarAhorcado(int intentos) {
    string figuras[] = {
        "\n      \n      \n      \n      \n      \n=========" ,
        "\n  O   \n      \n      \n      \n      \n=========" ,
        "\n  O   \n  |   \n      \n      \n      \n=========" ,
        "\n  O   \n /|   \n      \n      \n      \n=========" ,
        "\n  O   \n /|\\  \n      \n      \n      \n=========" ,
        "\n  O   \n /|\\  \n /    \n      \n      \n=========" ,
        "\n  O   \n /|\\  \n / \\  \n      \n      \n========="
    };
    cout << figuras[6 - intentos] << endl;
}

void jugarAhorcado(string palabra) {
    int intentos = 6;
    string oculta(palabra.length(), '_');
    bool encontrada;
    char letra;
    
    while (intentos > 0 && oculta != palabra) {
        cout << "\nPalabra: " << oculta << endl;
        cout << "Intentos restantes: " << intentos << endl;
        mostrarAhorcado(intentos);
        cout << "Ingresa una letra: ";
        cin >> letra;
        
        encontrada = false;
        for (size_t i = 0; i < palabra.length(); i++) {
            if (palabra[i] == letra) {
                oculta[i] = letra;
                encontrada = true;
            }
        }
        
        if (!encontrada) {
            intentos--;
            cout << "Letra incorrecta" << endl;
        }
    }
    
    mostrarAhorcado(intentos);
    if (oculta == palabra) {
        cout << "\nFelicidades, Has adivinado la palabra: " << palabra << endl;
    } else {
        cout << "\nPerdiste, La palabra era: " << palabra << endl;
    }
}

main() {
    string palabras[5], palabraSeleccionada;
    int op;
    cout << "Juego del Ahorcado" << endl;
    cout << "-------------------" << endl;
    op = opciones();
    
    if (op == 1) deportes(palabras);
    else if (op == 2) animales(palabras);
    else frutas(palabras);
    
    palabraSeleccionada = palabraAleatoria(palabras);
    jugarAhorcado(palabraSeleccionada);
    
    return 0;
}
//en la libreria esta lo que es "paises", pero en mi codigo no lo inclui ya que era opcional, por eso solo tiene 3 categorias