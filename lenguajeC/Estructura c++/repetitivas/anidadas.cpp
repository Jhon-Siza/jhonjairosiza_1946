#include <iostream>
using namespace std;
main(){
    bool entrar = true;
    char limpiar;
    int op,cantNumeros,contador,numero,nverificador,contverificador,suma = 0;
    while (entrar){
        cout<<"Menu de opciones"<<endl;
        cout<<"1. Numeros abundantes"<<endl;
        cout<<"2. Numeros deficientes"<<endl;
        cout<<"3. Numeros amigos"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingresa una opcion: ";
        cin>>op;
        if(op >0 && op <4){
            cout<<"Ingrese la cantidad de numeros: ";
            cin>>cantNumeros; 
            contador = 0;
            nverificador = 2;
        }

        switch(op){
            case 1 :
                while (contador < cantNumeros){
                    
                    contverificador = 1;
                    suma = 0;
                    while(contverificador < nverificador){
                        if(nverificador % contverificador == 0){
                            suma = suma+contverificador;
                        }
                        contverificador++;
                    }
                    if(suma > nverificador){
                        cout<<"Abudante: "<<nverificador<<endl;
                        contador++;
                    }
                    nverificador++;

                }
                break;
            case 2 :
                cout<<"Deficientes"<<endl;
                break;
            case 3 :
                cout<<"Amigos"<<endl;
                break;
            case 4 :
                entrar = false;
                break;
            default :
                cout<<"Opcion no valida"<<endl;
        }
        
        system("pause");
        system("cls");

    }
}