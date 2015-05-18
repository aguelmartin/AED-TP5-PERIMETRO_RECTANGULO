/* TP5 PERIMETRO RECTANGULO
 * MARTIN DANIEL AGUEL
 * 201505118
 */

#include <iostream>
using namespace std;

int Calc_Perimetro(int b, int a)
{
int per;
per = 2*b + 2*a;
return per;
}

int main()
{
int base;
int altura;
int perimetro;

cout<<"Ingrese la base:"<<endl;
cin>>base;
cout<<"Ingrese la altura:"<<endl;
cin>>altura;

perimetro = Calc_Perimetro(base, altura);

cout<<"El perimetro es: "<<perimetro<<endl;
}
