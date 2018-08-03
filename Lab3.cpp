#include <iostream>
#include <math.h>
#define PI  3.14159265359
using namespace std;

void ejer1();
void ejer2();
void ejer3();
long fact(long);

int main() {
	
	int opcion;

	do{
		cout<<"Bienvendio al Menu de Opciones"<<endl;
		cout<<"1.- Ejercicio 1"<<endl;
		cout<<"2.- Ejercicio 2"<<endl;
		cout<<"3.- Ejercicio 3"<<endl;
		cout<<"4.- Salir"<<endl;
		cin>> opcion;

		switch(opcion) {
			
			case 1:
				ejer1();
				break;
			case 2:
				ejer2();
				break;
			case 3:
				ejer3();
				break;
			case 4:
				cout<<"Tenga un Buen Dia"<<endl;
				break;
		}
	}
	while(opcion != 4);
}

void ejer1() {
	int a, b, c, h;

	cout<<"Ingrese a: "<<endl;
	cin>> a;
	cout<<"Ingrese b: "<<endl;
	cin>> b;
	cout<<"Ingrese c: "<<endl;
	cin>> c;

	int lodeadentro = (b*b) - 4*(a*c);
	int x1 =0, x2 = 0;
	
	if(lodeadentro < 0) {
		cout<<"No Tiene Solucion"<<endl;
	}else{
		x1 = (-b - sqrt(lodeadentro)) / (2*a);
		x2 = (-b + sqrt(lodeadentro)) / (2*a);
		
		if(x1 > 0 && x2 >0) {
			cout<<"(x+"<<x1<<")"<<"(x+"<<x2<<")"<<endl;
		}else if(x1 < 0 && x2 < 0) {
			cout<<"(x"<<x1<<")"<<"(x"<<x2<<")"<<endl;
		}else if(x1 > 0 && x2 < 0) {
			cout<<"(x+"<<x1<<")"<<"("<<x2<<")"<<endl;
		}else{
			cout<<"(x"<<x1<<")"<<"(x+"<<x2<<")"<<endl;
		}
	}

}
void ejer2() {
	int x;
	double seno = 0, coseno = 0, rad;

	cout<<"Ingrese X: "<<endl;
	cin>> x;

	rad = x * PI / 180; 

	for(int i = 0; i < 20; i++){
		seno += ((pow(-1,i)) / (fact((2*i)+1))) * (pow(rad,(2*i)+1)); 

		coseno += ((pow(-1,i)) / (fact(2*i))) * (pow(rad,2*i));
	}
	cout<<"El Seno de "<<rad<<" es: "<<seno<<endl;
	cout<<"El Coseno de "<<rad<<" es: "<<coseno<<endl;
}

void ejer3() {
	int n, r, s;
	long resp;
	
	cout<<"Ingrese las filas: "<<endl;
	cin>> s;

	resp = (fact(n) / fact(r)) * (fact(n-r));
      	
	for(n = 0; n < s; n++) {
		//for(r = 0; r < n )
	}
		
}

long fact(long n){
	if(n == 0) {
		return 1;
	}else{
		return n * fact(n-1);
	}
}
