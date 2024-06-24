#include <iostream>
using namespace std;

void depositar (float);
void retirar (float);
void mostrarSaldo ();

float ss=0;    //variable global, puede ser accedida por todos los programas

int main (){
    int op;
    float monto;
    system("cls");

    do {
       cout<<"\n\tCajero automatico"<<endl;
        cout<<"1. Depositar"<<endl;
        cout<<"2. Retirar"<<endl;
        cout<<"3. Mostrar saldo"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elige una opcion: ";cin>>op;
        switch (op){
            case 1:
                cout<<"Ingrese monto a depositar: "; cin>>monto;
                depositar(monto);
            break;
            case 2:
                cout<<"Ingrese monto a retirar: "; cin>>monto;
                retirar(monto);
            break;
            case 3:
                mostrarSaldo();
            break;
            case 0:
                cout<<"Saliendo..."<<endl;
                system("Pause");
            break;
            default:
                cout<<"Opcion no valida. Saliendo..."<<endl;
                system("Pause");
            break;
        }

    }while (op!=0);
    return 0;
}

void depositar (float m){
    ss = ss +m;
}

void retirar (float m){
ss = ss-m;
}

void mostrarSaldo (){
    cout<<"El saldo actual es "<<ss<<endl;
}