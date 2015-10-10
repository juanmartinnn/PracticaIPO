
#include <iostream>
using namespace std;

void mayusc(char *s)
{
     while(*s)
     {
        *s=toupper(*s);
        s++;
     }
}

int main (void)
{
    char cadena[150];
    cout << "Escriba una cadena \n ";
    cin.getline(cadena,150);
    mayusc(cadena);
    cout <<cadena << endl;

}


