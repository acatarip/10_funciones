#include<iostream>
#include<cmath>

using namespace std;
double AreaCir(double);

int main(){
    double r, a;
    cout<<"Ingrese el radio del circulo: ";cin>>r;
    if(r<=0){
    	cout<<"Valor de la circunferencia no valido."<<endl;
    }
    else{
    	a=AreaCir(r);
   	 	cout<<"El area del circulo es: "<<a<<endl;
    }
    
    return 0;
}

double AreaCir(double a){
	double pi, area;
	
	pi=M_PI;
	area = pi * pow(a, 2);
	return area;
}