#include <iostream>
#include <conio.h> 
#include <cmath>
using namespace std;
int main (){
    system ("cls");
    double nn;
    cout<<"Ingrese un numero: "; cin>>nn;

    cout<<"Valor absoluto de "<<nn<<" es "<<fabs(nn)<<endl;
    cout<<"Raiz cuadrada de "<<nn<<" es "<<sqrt(nn)<<endl;
    cout<<"Potencia (n^2) de "<<nn<<" es "<<pow(nn, 2)<<endl;


    return 0;
 }