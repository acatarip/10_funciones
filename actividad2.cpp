#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
	int n, MAX, random, i;
	srand(time(0));
	cout<<"Determine cantidad de numeros a generar: ";cin>>n;
	cout<<"Determine el numero maximo: ";cin>>MAX;
	
	if((n>0) && (MAX>0)){
		cout<<endl<<"Estos son "<<n<<" numeros aleatorios:"<<endl;
		for(i=1; i<=n; i++){
		random = rand()%n+1;
		cout<<random<<endl;
		}
	}
	else if (n<=0){
		cout<<"Cantidad de numeros a generar no valido."<<endl;
	}
	else if (MAX<=0){
		cout<<"Numero maximo no valido."<<endl;
	}
	
	return 0;
}