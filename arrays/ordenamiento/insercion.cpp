#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void llenarVector(int v[], int n){
    srand(time(NULL));
    for(int i=0; i<n; i++){
        //v[i]=rand()%20+1;
        cin>>v[i];
    }
}
void verVector(int v[], int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<"\t";
    }
}
int ordenaInsercion(int v[],int num){
    int contar=0,aux,j;
    bool bandera=true;
    /*for(int i=0;i<n-1 && cambios;i++){
        cambios=false;
        for(int j= i+1;j<n;j++){
            contar++;  
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                cambios=true;

            }

        }
            

    }
    return contar;*/
    for(int i=1; i<num;i++){
        aux=v[i];
        j = i-1;
        while (j>=0){
            contar++;
            if(aux <v[j]){
                v[j+1]=v[j];
                v[j]=aux;
            }
            j--;
        }
    }
    return contar;


}
main()
{
    int num, comparaciones;
    cout<<"Ingresa el Nro de Elementos del vector: ";
    cin>>num;
    int vector[num];
    llenarVector(vector,num);
    cout<<"Vector original: \n";
    verVector(vector,num);
    comparaciones = ordenaInsercion(vector,num);
    cout<<"\nVector ordenado: \n";
    verVector(vector,num);
    cout<<"\nEl nro de comparaciones = "<<comparaciones;
}