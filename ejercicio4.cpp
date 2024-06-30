#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
	srand (time(0));
	int nMagico=rand() % 100 + 1;
	cout<<nMagico;    //esta linea sirve para probar el programa, luego se eliminara

	return 0;
}