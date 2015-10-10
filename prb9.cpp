#include <iostream>
using namespace std;

int cuentCaract(char cadena[])
{
  int i;
  for (i = 0; cadena[i] != '\0';i++){}
  return i;
}

int main()
{

  char arregloCadena[50] = {'\0'};
  char arregloCadena1[] = "soy el arregloCadena1 ";
  cout << "arregloCadena tiene " << cuentCaract(arregloCadena) << " caracteres."
       << endl;
  //cout << "arregloCadena1 tiene " <<cuentCaract(arregloCadena1) << " caracteres."<< endl;
  cout << "Introduzca para arregloCadena"<< endl;
  cin >> arregloCadena;
  cout << "Elementos  arregloCadenason: " << endl;
  for (int i = 0 ; i < 10 ; i++) //Notar el menor estricto(<) para ir desde 0 hasta 9
    cout <<"arregloCadena["<<i<<"]="<<arregloCadena[i]
  << endl;
  cout << "Ahora la cantidad son: " << cuentCaract(arregloCadena)<< " caracteres" << endl;
  return 0;
}

