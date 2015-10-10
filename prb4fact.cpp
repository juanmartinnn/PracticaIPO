#include <iostream>
using namespace std;

int fact(int a,int b,int factorial)
{
    factorial=1;
    for (b=1 ; b<=a ; b++)
    {
         factorial=b*factorial;
    }

    cout << "El factorial del numero ingresado es " <<factorial<<endl;

    return 0;
}

int main ()
{
    int a;
    int b;
    int factorial;
    cout << "Ingrese su numero " <<endl;
    cin >> a;
    fact(a,b,factorial);
}
