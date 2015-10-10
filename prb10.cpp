#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;

int main()
{
   int arre[20];
   int x=1,a,i,aux=0;

   for(i=0;i<=19;i++)
   {
      cout<<("valor a buscar :  ",x);
      scanf("%d ",&arre[i]);
      x++;
   }
   cout<<("\nINDICA UN VALOR:   ");
   scanf("%d ",&a);
   for(i=0;i<=19;i++)
   {
      if(a==arre[i])
      {
         cout<<("el numero se encuentra en %d: ",i);
      }
      else
      {
         aux++;
      }
   }
   if(aux==20)
   {
      cout<<("el numero no se encuentra");
   }
   return 0;
}
