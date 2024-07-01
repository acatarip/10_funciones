#include<iostream>
#include<cmath>
using namespace std;

double hipo(float, float);

int main(){
	float ca, co;
	double hi;
	cout<<"Ingrese el cateto adyacente: ";cin>>ca;
	if(ca>0){
		cout<<"Ingrese el cateto opuesto: ";cin>>co;
		if(co>0){
			hi=hipo(ca,co);
			cout<<"La hipotenusa es "<<hi<<"."<<endl;
		}
		else{
			cout<<"Valor del cateto opuesto no valido."<<endl;
		}
	}
	else{
		cout<<"Valor del cateto adyacente no valido."<<endl;
	}

	return 0;
}

double hipo(float a,float b){
	double c;
	
	c=sqrt(pow(a,2) + pow(b,2));
	return c;
}