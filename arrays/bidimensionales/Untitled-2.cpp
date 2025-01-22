#include <iostream>
using namespace std;
int multiplicar(int a, int b)
{
    if (b == 1)
        return a;
    else
        return a + multiplicar(a,b - 1);    
}
main()
{
    int a,b;
    cout<< "ingresa el primer numero: ";
    cin>> a;
    cout<< "ingresa el segundo numero: ";
    cin>> b;
    cout<< "la multiplicacion de "<<a<<" y "<<b<<" es: "<<multiplicar(a,b)<<endl;

}