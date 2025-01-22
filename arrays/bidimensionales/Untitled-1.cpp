#include <iostream>
using namespace std;
int potencia(int a, int b)
{
    if (b == 1)
        return a;
    else
        return a * potencia (a,b - 1);    
}
main()
{
    int a,b;
    cout<< "ingresa el primer numero: ";
    cin>> a;
    cout<< "ingresa el segundo numero: ";
    cin>> b;
    cout<< "la potencia de "<<a<<" y "<<b<<" es: "<<potencia(a,b)<<endl;

}