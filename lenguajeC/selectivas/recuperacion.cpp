#include <iostream>
using namespace std;
main()
{
    int n1,n2;
    char operacion;
    cout<<"Ingrese n1: "; 
    cin>>n1;
    cout<<"Ingrese n2: "; 
    cin>>n2;
    cout<<"Ingrese una operacion: "; 
    cin>>operacion;
    switch(operacion)
    {
        case '+': 
            cout<<"El resultado es: "<<n1+n2<<endl; 
            break;
        case '-':
            cout<<"El resultado es: "<<n1-n2<<endl; 
            break;
        case '*': 
            cout<<"El resultado es: "<<n1*n2<<endl; 
            break;
        case '/':
            if(n2==0)
        {
            cout<<"No se puede dividir por 0"<<endl;
            break;
        } 
        else
        {
            cout<<"El resultado es: "<<n1/n2<<endl; 
            break;
        }    
        default:
            cout<<"Operacion no valida"<<endl;
    
            
    
    }

    

}