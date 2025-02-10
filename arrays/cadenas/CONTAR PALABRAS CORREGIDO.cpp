    #include <iostream>
using namespace std;

void llenarCadena(char cad[], int n = 50)
{
    cout << "Ingresa una cadena de caracteres: ";
    cin.getline(cad, n);
    cin.clear();
}

int longitudCadena(char cad[])
{
    int contador = 0;
    for (int i = 0; cad[i] != '\0'; i++)
    {
        if (cad[i] != ' ') // Evita contar espacios en blanco
        {
            contador++;
        }
    }
    return contador;
}

int contarPalabras(char cad[])
{
    int palabras = 0;
    bool palabra = false;

    for (int i = 0; cad[i] != '\0'; i++)
    {
        if (cad[i] != ' ' && !palabra)
        {
            palabras++;
            palabra = true;
        }
        else if (cad[i] == ' ')
        {
            palabra = false;
        }
    }

    return palabras;
}

int main()
{
    char palabras[50];
    llenarCadena(palabras);
    cout << "La cadena ingresada es: " << palabras << endl;
    cout << "La longitud de la cadena es: " << longitudCadena(palabras) << endl;
    cout << "La cantidad de palabras es: " << contarPalabras(palabras) << endl;
    
    return 0;
}