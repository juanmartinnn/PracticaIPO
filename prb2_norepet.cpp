#include<iostream>
#include <string.h>
using namespace std;


int no_repetitions(int i=0, int j=0)
{
    char resultado[80]="";
    char palabra[100];
    {
    if(!strchr(resultado,palabra[i]))
    resultado[j++]=palabra[i];
    i++;

     }
    return 0;
}

int imprimir(int i=0, int j=0)
{
char resultado[80]="";
char palabra[100];
    resultado[j]='\0';
    cout<<("\nEl resultado seria!\n%s",resultado);


}
int  main()
{
int i=0;
int j=0;
char resultado[80]="";
char palabra[100];
cout<<"Ingresa una frase\n";
cin>>("%s",palabra);
while(palabra[i])
    no_repetitions(i=0, j=0);
    imprimir(i,j);

}
