#include <stdlib.h>
#include <time.h>
#include <iostream>

namespace vectorn{
    void llenarVector(int v[], int n, int ri=0, int rs=10){
        int i;
        for(i=0;i<n;i++){
            v[i]=rand()%(rs-ri+1)+ri;
            //v[i]= ri + rand()%(rs+1 - ri);
        }

    }

    void ordenaBurbujav3(int v[], int n){
    int mejora=1;
    bool cambio=true;
    int aux;
    for(int i = 0; i<n && cambio; i++){
        cambio = false;
        for(int j = 0; j<n-mejora; j++){
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                cambio= true;
            }
        }
        mejora++;
    }
    }
    void verVector(int v[], int n){
        for(int i = 0; i<n;i++){
        std::cout<<v[i]<<"\t";
        }
    }
}
//esta libreria le pertenece a Jhon Siza, por si acaso no le agregue el nombre a esta libreria porque no se si cambie en el cpp de binaria