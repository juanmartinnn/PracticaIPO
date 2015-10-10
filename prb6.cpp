#include <iostream>
#include <cstring>
using namespace std;

int trat_cadena()
{
char entrada[256];
    cout<<"Introduzca una frase: ";

   cin.getline( entrada, sizeof( entrada ) );

    cout<<"Su longitud es  "<<strlen( entrada )<<" caracteres de largo.\n";


}


int main ()
{
  char entrada[256];
    cout<<"Introduzca una frase: ";

   cin.getline( entrada, sizeof( entrada ) );

    cout<<"Su longitud es  "<<strlen( entrada )<<" caracteres de largo.\n";


   char frase1[80];
    char frase2[] = "estas ";

    strcpy( frase1, "este " );

    strcat( frase1, "trabajo " );
    strcat( frase1, frase2 );
    strcat( frase1, "es de IPO." );

    cout<< frase1<<"\n";

    char respt[] = "Lima";
    char entradarespt[200];
    do {
        cout<<"Cual es la capital del Peru? \n";
        cin.getline( entradarespt, 80 );
    } while ( strcmp( respt, entradarespt ) != 0 );
    cout<<"Su respuesta esta correcta!";

    trat_cadena();
    return 0;

}
