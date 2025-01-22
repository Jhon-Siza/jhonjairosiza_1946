#include <iostream>
using namespace std;
void cambiarString(string &nombres){
    nombres = "Sin nombre";

}
void cambiarArray(char apellido[]){
    /*apellido[0] = 'A';
    apellido[1] = 'l';
    apellido[2] = 'e';
    apellido[3] = 'x';
    apellido[4] = 'a';
    apellido[5] = 'p';
    apellido[6] = 'e';
    apellidio[7] = '\0'*/;//caracter nulo para indicar el final de la cadena
    cout<< "ingresa el nuevo apellido: ";
    cin.getline(apellido, 20);

}
main()
{
    string nombres, apodo;
    string curso[5] = {"C++", "Java", "Phyton", "C#", "PHP"};
    char apellido[20], apodo1[20];
    cout<< "Ingrese sus nombres: ";
    getline(cin, nombres);
    cout<< "Su nombre es: "<<nombres<<endl;
    cambiarString(nombres);
    cout<< "Su nombre es luego de llamar a la funcion: "<<nombres<<endl;
    cout<< "Ingrese sus apellidos: ";
    cin.getline (apellido, 20);
    cout<< "Su apellido inicial es: "<<apellido<<endl;
    cambiarArray(apellido);
    cout<< "Su apellido es luego de llamar a la funcion es: "<<apellido<<endl;

}