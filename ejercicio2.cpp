#include <iostream>
using namespace std;

void porValor (int a);
void porReferencia (int &a);

int main (){
    int n=5;
    cout<<"Antes de porValor; n = "<<n<<endl;
    porValor(n);
    cout<<"Despues de pasar por Valor; n = "<<n<<endl;

    cout<<"Antes de pasar por Referencia; n = "<<n<<endl;
    porReferencia(n);
    cout<<"Luego de pasar por Referencia; n = "<<n<<endl;
    return 0;
}

void porValor (int a){
    a=10;
    cout<<"   Dentro de porValor; a = "<<a<<endl;
}

void porReferencia (int &a){
    a=10;
    cout<<"  Dentro de porReferencia; a = "<<a<<endl;
}