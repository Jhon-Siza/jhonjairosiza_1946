#include <iostream>
using namespace std;
float gravedad = 9.8;
void funcion1(int a){
    float gravedad = 10.8;
    cout << "gravedad en funcion1: " << gravedad << endl;
    cout << "gravedad global: "<< :: gravedad << endl;
    cout << " a: " << a << endl;

}
void funcion2(float x){
    float gravedad = 11.8;
    cout << "gravedad en funcion2: " << gravedad << endl;
    cout << "gravedad global: "<< :: gravedad << endl;
    cout << " x: " << x << endl;    

}
main()
{
    int num1 = 10;
    float num2 = 20.5;
    {
        char letra = 'A';
        cout <<"Letra: " << letra << endl;
    }
    cout << "gravedad en main: " << gravedad << endl;
    funcion1(num1);
    funcion2(num2);

}