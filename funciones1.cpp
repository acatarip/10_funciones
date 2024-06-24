#include <iostream>
using namespace std;

int main (){
    int op;
    system("cls");
    cout<<"Cajero automatico"<<endl;
    cout<<"1. Depositar"<<endl;
    cout<<"2. Retirar"<<endl;
    cout<<"3. Mostrar saldo"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"Elige una opcion: ";cin>>op;
    switch (op){
        case 0:
        cout<<"Saliendo..."<<endl;
        system("Pause");
        break;
        default:
        cout<<"Opcion no valida. Saliendo..."<<endl;
        system("Pause");
        break;
    }

    return 0;
}