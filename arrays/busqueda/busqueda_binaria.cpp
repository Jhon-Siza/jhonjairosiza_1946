#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../ordenamiento/insercion.cpp"
using namespace std;
void llenaDatos(int v[],int n)
{
     srand(time(NULL));
    for(int i=0; i<n; i++){
        //v[i]=rand()%20+1;
        cin>>v[i];
    }

}
void verDatos(int v[],int n)
{
    for(int i=0; i<n; i++){
        cout<<v[i]<<"\t";
    }

}
int ordenaBusqueda(int v[],int ne){
    int contar=0,aux;
    for(int i=1; i<ne;i++){
        aux=v[i];
        int j = i-1;
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

bool isBusquedaBinaria(int v[],int n, int elemento)
{
    int Iabajo,Iarriba, Icentro;
    Iabajo=0;
    Iarriba=n-1;
    Icentro=(Iabajo+Iarriba)/2;
    while(Iabajo<=Iarriba && v[Icentro]!=elemento)
    {
        if(v[Icentro]<elemento)
        {
            Iabajo=Icentro+1;
        }
        else
        {
            Iarriba=Icentro-1;
        }
        Icentro=(Iabajo+Iarriba)/2;
    }
    return (Iabajo<=Iarriba);

}

main()
{
    int ne,dato;
    cout<<"Nro de elementos del array: ";
    cin>>ne;
    int vector[ne];
    llenaDatos(vector,ne);
    cout<<"Ingrese el dato a buscar: ";
    cin>>dato;
    ordenaInsercion(vector,ne);
    (isBusquedaBinaria(vector,ne,dato))?cout<<"Datos encontrado ":cout<<"Datos no encontrado ";
    return 0;

}
