#include<iostream>
#include<cmath>
using namespace std;

void raices(float, float, float);

int main(){
	float a, b, c;
	cout<<"Para la ecuacion cuadratica ax^2 + bx + c = 0"<<endl;
	cout<<"Ingrese el valor de a: ";cin>>a;
	if(a==0){
		cout<<"El valor de a no puede ser cero.";
	}
	else{
		cout<<"Ingrese el valor de b: ";cin>>b;
		cout<<"Ingrese el valor de c: ";cin>>c;
		cout<<endl<<"Para la ecuacion: "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
		raices(a, b, c);
	}
	
	return 0;
} 
void raices(float a, float b, float c){
	float d, x1, x2;
	d=pow(b,2) - (4*a*c);
	
	if(d>0){	
		x1=(-b + sqrt(d)) / (2*a);
		x2=(-b - sqrt(d)) / (2*a);
		cout<<"Las raices son reales: "<<x1<<" y "<<x2<<"."<<endl;	
	}
	else if(d==0){
		x1=(-b + sqrt(d)) / (2*a);
		cout<<"Las raices son reales e iguales, por lo tanto son: "<<x1<<" y "<<x1<<"."<<endl;
	}
	else{
		cout<<"Las raices son complejas."<<endl;
	}
	
}