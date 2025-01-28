//Juego de piedras, papel o tijera
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para obtener la elección del usuario
int obtenerEleccionUsuario() {
    int eleccion;
    cout << "Elige: (0) Piedra, (1) Papel, (2) Tijera: ";
    cin >> eleccion;
    return eleccion;
}

// Función para obtener la elección de la máquina (con nivel de dificultad)
int obtenerEleccionMaquina(int dificultad) {
    int eleccion;
    srand(time(0)); // Semilla para generar números aleatorios

    if (dificultad == 1) { // Nivel principiante
        eleccion = rand() % 3; // Elección aleatoria entre 0, 1 y 2
    } 
    else if (dificultad == 2) { // Nivel intermedio
        eleccion = (rand() % 3 + 1) % 3; // La máquina tiene más probabilidades de elegir una opción ganadora
    } 
    else { // Nivel avanzado
        eleccion = (rand() % 3 + 2) % 3; // La máquina tiene aún más probabilidades de elegir una opción ganadora
    }

    return eleccion;
}

// Función para determinar el ganador de la ronda
int determinarGanador(int eleccionUsuario, int eleccionMaquina) {
    if (eleccionUsuario == eleccionMaquina) {
        return 0; // Empate
    }
    else if ((eleccionUsuario == 0 && eleccionMaquina == 2) || 
             (eleccionUsuario == 1 && eleccionMaquina == 0) || 
             (eleccionUsuario == 2 && eleccionMaquina == 1)) {
        return 1; // Ganó el usuario
    }
    return -1; // Ganó la máquina
}

// Función para determinar el ganador del juego
void jugarJuego(int dificultad) {
    int puntosUsuario = (dificultad == 1) ? 0 : (dificultad == 2) ? 1 : 2;
    int puntosMaquina = (dificultad == 1) ? 0 : (dificultad == 2) ? 0 : 0;

    for (int ronda = 1; ronda <= 5; ronda++) {
        cout << "\nRonda " << ronda << endl;

        int eleccionUsuario = obtenerEleccionUsuario();
        int eleccionMaquina = obtenerEleccionMaquina(dificultad);

        cout << "El usuario eligió: " << (eleccionUsuario == 0 ? "Piedra" : eleccionUsuario == 1 ? "Papel" : "Tijera") << endl;
        cout << "La máquina eligió: " << (eleccionMaquina == 0 ? "Piedra" : eleccionMaquina == 1 ? "Papel" : "Tijera") << endl;

        int resultado = determinarGanador(eleccionUsuario, eleccionMaquina);

        if (resultado == 0) {
            cout << "¡Empate!" << endl;
        } else if (resultado == 1) {
            cout << "¡Ganaste esta ronda!" << endl;
            puntosUsuario++;
        } else {
            cout << "¡La máquina ganó esta ronda!" << endl;
            puntosMaquina++;
        }

        cout << "Puntuación - Usuario: " << puntosUsuario << ", Máquina: " << puntosMaquina << endl;
    }

    cout << "\nResultado Final: " << endl;
    if (puntosUsuario > puntosMaquina) {
        cout << "¡Felicidades, ganaste el juego!" << endl;
    } else if (puntosUsuario < puntosMaquina) {
        cout << "¡La máquina ganó el juego!" << endl;
    } else {
        cout << "¡El juego terminó en empate!" << endl;
    }
}

int main() {
    int dificultad;

    cout << "Elige el nivel de dificultad:\n";
    cout << "1. Principiante\n";
    cout << "2. Intermedio\n";
    cout << "3. Avanzado\n";
    cout << "Ingresa el número de dificultad: ";
    cin >> dificultad;

    while (dificultad < 1 || dificultad > 3) {
        cout << "Opción inválida. Por favor, elige un número entre 1 y 3: ";
        cin >> dificultad;
    }

    jugarJuego(dificultad);

    return 0;
}
