#include<iostream>
#include<stdlib.h>

using namespace std;

float a;

int main(){
	cout << "ingrese algun valor";
	cin >> a;
	if(a>10){
		cout << "el numero es mayor y su resultado es" << a*a << endl;
	}else{
		cout << "el numero es menor y su resultado es" << a/3 << endl;
	}
	return 0;
	
}

