#include <iostream>
using namespace std;

main()
{
    int num, M;
    cin >> num;
    M = num % 3;
    if (M == 0)
    {
        cout << "Multiplo de 3";
    }
    else
    {
        cout << "No es multiplo de 3";
    }
}