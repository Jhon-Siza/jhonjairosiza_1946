#include <iostream>
#include <stdio.h>
using namespace std;

main()
{
    int num, r, divisor;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "Ingrese un divisor: ";
    cin >> divisor;
    r = num % divisor;
    if (r == 0){
        cout << "El número " << num << " es divisible para " << divisor << endl;
        printf("El numero %d es divisible para %d\n", num, divisor);
    }
    else {
        cout << "El número " << num << " no es divisible para " << divisor << endl;
        printf("El numero %d no es divisible para %d\n", num, divisor);
        num = 0;
    }
}