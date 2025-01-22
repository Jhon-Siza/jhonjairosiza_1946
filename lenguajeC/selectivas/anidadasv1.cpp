#include <iostream>
using namespace std;
main(){
    int a,b,c;
    cout<< "ingrese valor 1 : ";
    cin>> a;
    cout<< "ingrese valor 2 : ";
    cin >> b;
    cout<< "Ingrese valor 3 : ";
    cin>> c;
    if(a > b){
        if(a > c){
            cout << "el mayor es :"<<a << endl;
        }else{
            cout << "el mayor es :" <<c << endl;
        }
    }
    else{
        if (b > c){
            cout << "el mayor es : "<< b << endl;
        }
        else{
            if ( c > a){
                cout << "el mayor es : "<< c << endl;

            }
            else{
                cout << "son iguales "<<endl;
            }
        }
    }

        
    
}