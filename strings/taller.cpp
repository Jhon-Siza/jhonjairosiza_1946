#include <iostream>
using namespace std;
int main() {
    string cadena= "informatica";
    //borrarmos los caracteres de la cadena
    cadena.clear();
    cout << cadena; //No muestra nada
    //volvemos a inicializar con un valor 
    cadena="informatica";

    //longitud de la cadena 
    cout<< "La cadena " << cadena << " tiene " << cadena.length() << " caracteres." << endl;

    //Primer y ultimo caracter
    cout << "Primer caracter: "<< cadena.front() << endl; //igual que cadena[0]
    cout << "Ultimo caracter: "<< cadena.back() << endl; //igual que cadena[[cadena. length() - 1]]

    //añadir cadenas
    cadena.append(" moderna"); //es lo mismo que cadena += " moderna";
    cout << cadena << endl;

    //añadimos un caracter
    char car= '0';
    cadena.append(1,car);
    cout << cadena << endl;

    //volvemos a inicializar con un valor
    cadena="informatica";

    //buscar caracteres
    if(cadena.find("i")!=-1)
        cout << "Posicion del primer caracter i: " << cadena.find("i") << endl;
    cout << "Posicion del segundo caracter i: " << cadena.find("i", 1) << endl;

    //extraer subcadenas
    string subcad;
    subcad=cadena.substr(2,3);
    cout << subcad << endl;
    subcad=cadena.substr(5);
    cout << subcad << endl;

    //reemplazar parte de la cadena
    cadena.replace(6,5,"accion");
    cout << cadena << endl;
    return 0;    
}