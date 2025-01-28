//Juego de piedras, papel o tijera
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//1.Funcion para obtener la elección del usuario
int obtenerEleccionUsuario() {
    int eleccion;
    cout << "Elige: (0) Piedra, (1) Papel, (2) Tijera: ";
    cin >> eleccion;
    return eleccion;
}

//Funcion para obtener la elección de la máquina 
int obtenerEleccionMaquina(int dificultad) {
    int eleccion;
    srand(time(0));

    if (dificultad == 1) { // Nivel princiante (facil o suave)
        eleccion = rand() % 3; 
    } 
    else if (dificultad == 2) { // Nivel intermedio (normal o "promedio" de dificultad)
        eleccion = (rand() % 3 + 1) % 3; 
    } 
    else { // Nivel avanzado (dificil o imposible)
        eleccion = (rand() % 3 + 2) % 3;
    }

    return eleccion;
}

//2.Función para determinar el ganador de la ronda
int determinarGanador(int eleccionUsuario, int eleccionMaquina) {
    if (eleccionUsuario == eleccionMaquina) {
        return 0; // Empate
    }
    else if ((eleccionUsuario == 0 && eleccionMaquina == 2) || 
             (eleccionUsuario == 1 && eleccionMaquina == 0) || 
             (eleccionUsuario == 2 && eleccionMaquina == 1)) {
        return 1; 
    }
    return -1; 
}

//3.Función para determinar el ganador del juego
void jugarJuego(int dificultad) {
    int puntosUsuario = (dificultad == 1) ? 0 : (dificultad == 2) ? 1 : 2;
    int puntosMaquina = (dificultad == 1) ? 0 : (dificultad == 2) ? 0 : 0;

    for (int ronda = 1; ronda <= 5; ronda++) {
        cout << "\nRonda " << ronda << endl;

        int eleccionUsuario = obtenerEleccionUsuario();
        int eleccionMaquina = obtenerEleccionMaquina(dificultad);

        cout << "El usuario eligio: " << (eleccionUsuario == 0 ? "Piedra" : eleccionUsuario == 1 ? "Papel" : "Tijera") << endl;
        cout << "La maquina eligio: " << (eleccionMaquina == 0 ? "Piedra" : eleccionMaquina == 1 ? "Papel" : "Tijera") << endl;

        int resultado = determinarGanador(eleccionUsuario, eleccionMaquina);

        if (resultado == 0) {
            cout << "Empate" << endl;
        } else if (resultado == 1) {
            cout << "Ganaste esta ronda" << endl;
            puntosUsuario++;
        } else {
            cout << "La maquina gano esta ronda" << endl;
            puntosMaquina++;
        }

        cout << "Puntuacion - Usuario: " << puntosUsuario << ", Maquina: " << puntosMaquina << endl;
    }

    cout << "\nResultado Final: " << endl;
    if (puntosUsuario > puntosMaquina) {
        cout << "Felicidades ganaste el juego" << endl;
    } else if (puntosUsuario < puntosMaquina) {
        cout << "La maquina gano el juego" << endl;
    } else {
        cout << "El juego termino en empate" << endl;
    }
}

int main() {
    int dificultad;

    cout << "Elige el nivel de dificultad:\n";
    cout << "1. Principiante\n";
    cout << "2. Intermedio\n";
    cout << "3. Avanzado\n";
    cout << "Ingresa el numero de dificultad: ";
    cin >> dificultad;

    while (dificultad < 1 || dificultad > 3) {
        cout << "Opcion invalida. Por favor elige un numero entre 1 y 3: ";
        cin >> dificultad;
    }

    jugarJuego(dificultad);

    return 0;
}
// En caso de que no le corra el codigo, por favor cierre la ejecucion y vuelva intentar por favor inge, a la segunda  ejecucion sirve el codigo :C
// Lo intente, ahora si haci se debia hacer el codigo, pues diria que lo hice "a mi manera"
