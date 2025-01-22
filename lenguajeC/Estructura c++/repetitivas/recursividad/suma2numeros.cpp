#include <iostream>
using namespace std;
int suma(int a, int b)
{
    if (b == 0)
        return a;
    else
        return suma(a + 1,b - 1);    
}
main()
{
    int a,b;
    cout<< "ingresa el primer numero: ";
    cin>> a;
    cout<< "ingresa el segundo numero: ";
    cin>> b;
    cout<< "la suma de "<<a<<" y "<<b<<" es: "<<suma(a,b)<<endl;

}