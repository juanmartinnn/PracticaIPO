#include <iostream>
#include <algorithm>
using namespace std;
int n,i,j,A[4000000],aux;

int ssort()
{
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            if(A[j]>A[j+1])
            {
                aux=A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
            }
        }
    }
sort(intArray, intArray + SIZE);
cout << "ordenado: ";
for(i=1;i<=n;i++)
{
cout<<","<<A[i];
}

}

int main()
{

cout<<"Ingrese la Cantidad de Nuemeros a Ingresar: ";
cin>>n;
//LLENA EL VECTOR
    for(i=1;i<=n;i++)
    {
    cout<<"Vector Numero "<<i<<" :";
    cin>>A[i];
    }
ssort();
}


