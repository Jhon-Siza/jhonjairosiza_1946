#include <iostream>
#include <string.h>
using namespace std;
int comparaCadena(char cad1[], char cad2[]){
    return strcmp(cad1, cad2);
}
void copiaCadena(char cad1[], char cad2[]){
    strcpy(cad1, cad2);
}
void anadeCadena(char cad1[], char cad2[]){
    strcat(cad1, cad2);
}
bool alfabetico(char cad1[]){
    bool alfa=true;
    for(int i=0;i<strlen(cad1);i++){
        if(isalpha(cad1[i])==false){
            alfa=false;
            break;
        }
        
    }
    return alfa;
}
bool numerico(char cad1[]){
    bool numerico=true;
    for(int i=0;i<strlen(cad1);i++){
        if(isdigit(cad1[i])==false){
            numerico=false;
            break;
        }
        
    }
    return numerico;
}
bool esespacio(char cad1[]){
    bool espacio=true;
    for(int i=0;i<strlen(cad1);i++){
        if(isspace(cad1[i])==false){
            espacio=false;
            break;
        }
        
    }
    return espacio;
}
bool esmayuscula(char cad1[]){
    bool mayuscula=true;
    for(int i=0;i<strlen(cad1);i++){
        if(isupper(cad1[i])==false){
            mayuscula=false;
            break;
        }
        
    }
    return mayuscula;
}
bool esminuscula(char cad1[]){
    bool minuscula=true;
    for(int i=0;i<strlen(cad1);i++){
        if(islower(cad1[i])==false){
            minuscula=false;
            break;
        }
        
    }
    return minuscula;
}
void mayusculas(char cad1[]){
    for(int i=0;i<strlen(cad1);i++){
        cad1[i]=toupper(cad1[i]);
    }
}
void minusculas(char cad1[]){
    for(int i=0;i<strlen(cad1);i++){
        cad1[i]=tolower(cad1[i]);
    }
}
main()
{
    char cad1[50], cad2 [50], cad3[50];
    int comparacion;
    cout<<"Ingrese la primera cadena: ";
    cin.getline(cad1,50);
    cout<<"Ingrese la segunda cadena: ";
    cin.getline(cad2,50);
    comparacion=comparaCadena(cad1,cad2);
    cout<<"comparacion: "<<comparacion<<endl;//se compara las cad1 y cad2 para ver cual de las 2 es mayor o menor, si son iguales da 0 pero si son diferentes da -1 pero si cad1 es menor a cad2, da 1 si cad 1 es mayor a cad2, esto se basa con el orden del alfabeto
    //se compara letra por letra, ejem seria que ana es menor a xy porque se compara en alfabeto y ver  cual esta en primer o ultimo lugar, por lo que asume con mayor, son valores Ascii (asky)
    (comparacion==0)?cout<<"Las cadenas son iguales":cout<<"Las cadenas son diferentes";
    //copiaCadena(cad1,cad2);
    //cout<<"\nCadena copiada: c1 = "<<cad1;
    //anadeCadena(cad1, cad2);
    //cout<<"\nCadena anadida: c1 = "<<cad1;
    (alfabetico(cad1))?cout<< "\nLa cadena " <<cad1 <<" es alfanumerica ":cout<<"\nLa cadena "<<cad1 <<" no es alfanumerica ";
    (alfabetico(cad1))?cout<< "\nLa cadena " <<cad1 <<" es alfabetica ":cout<<"\nLa cadena "<<cad1 <<" no es alfabetica ";
    (numerico(cad1))?cout<< "\nLa cadena " <<cad1 <<" es numerica ":cout<<"\nLa cadena "<<cad1 <<" no es numerica ";
    (esespacio(cad1))?cout<< "\nLa cadena " <<cad1 <<" tiene espacios ":cout<<"\nLa cadena "<<cad1 <<" no tiene espacios ";
    (esmayuscula(cad1))?cout<< "\nLa cadena " <<cad1 <<" es mayuscula ":cout<<"\nLa cadena "<<cad1 <<" no es mayuscula ";
    (esminuscula(cad1))?cout<< "\nLa cadena " <<cad1 <<" es minuscula ":cout<<"\nLa cadena "<<cad1 <<" no es minuscula ";
    mayusculas(cad1);
    cout<<"\nCadena en mayusculas: "<<cad1;
    minusculas(cad1);
    cout<<"\nCadena en minusculas: "<<cad1;
}