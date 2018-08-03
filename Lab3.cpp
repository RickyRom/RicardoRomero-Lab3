#include <iostream>
#include <math.h>

using namespace std;

void ejer1();
void ejer2();
void ejer3();

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

}

void ejer3() {

}
