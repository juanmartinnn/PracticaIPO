#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()

{

FILE *archivo;
char letra;
archivo = fopen ("prueba.txt","r");
if (archivo==NULL)
{
cout << "No se puede abrir el archivo" <<endl ;
exit( 1 );
}

cout<<( "Contenido del fichero:\n"  );
letra=getc (archivo);
while (feof (archivo)==0)
{
cout << letra ;
cout <<" ";
letra=getc(archivo);
}
if (fclose (archivo)!=0)

cout << "Problemas al cerrar el archivo" <<endl;
cout <<endl;
system ("PAUSE");
}
