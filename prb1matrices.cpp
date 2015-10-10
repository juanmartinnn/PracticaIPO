#include <iostream>

using namespace std;


int productMatrix(int f1, int c1, int f2,int c2,int A[40][40], int B[40][40], int C[40][40])

{
    for(int i=0; i<f1; ++i)
        for(int j=0; j<c2; ++j)
            C[i][j] = 0;

    for(int i=0; i<f1; ++i)
        for(int j=0; j<c2; ++j)
            for(int z=0; z<c1; ++z)
                C[i][j] += A[i][z] * B[z][j];

return 0;
}

int imprimir(int f1, int c1, int f2,int c2,int A[40][40], int B[40][40], int C[40][40])
{
 cout<<"Matriz A:\n";
    for(int i=0; i<f1; ++i)
    {
        for(int j=0; j<c1; ++j)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz B:\n";
    for(int i=0; i<c1; ++i)
    {
        for(int j=0; j<c2; ++j)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz C:\n";
    for(int i=0; i<f1; ++i)
    {
        for(int j=0; j<c2; ++j)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;


}
int main()
{
    int A[40][40], B[40][40], C[40][40];
    int f1, c1, f2,c2;

    cout<<"Ingreso de la matriz A."<<endl;
    cout<<"Filas de A: "; cin>>f1;
    cout<<"Columnas de A: "; cin>>c1;
    cout<<endl;
    for(int i=0; i<f1; ++i)
        for(int j=0; j<c1; ++j)
        {
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }

    cout<<"Ingreso de la  matriz B."<<endl;
    cout<<"Filas de B: "; cin>>f2;
    cout<<"Columnas de : "; cin>>c2;
    cout<<endl;
    for(int i=0; i<f2; ++i)
        for(int j=0; j<c2; ++j)
        {
            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
        }
    productMatrix(f1, c1, f2,c2,A,B,C);
    imprimir(f1, c1, f2,c2,A,B,C);



    return 0;
}

