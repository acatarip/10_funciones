#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
	srand (time(0));
	int nMagico=rand() % 100 + 1;
	int intento;
	
	cout<<"Adivina el numero magico (entre 1 y 100): ";
	while (true){
		cin>>intento;
		if (intento < nMagico){
			cout<<"Muy bajo. Intenta de nuevo: ";
		} else if (intento > nMagico){
			cout<<"Muy alto. Intenta de nuevo: ";
		} else {
			cout<< "Asertaste. El numero magico es "<<nMagico<<endl;
			break;
		}
		
	}
	return 0;
}