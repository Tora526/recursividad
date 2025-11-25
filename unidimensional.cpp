#include <iostream>
using namespace std;

int main(){
	int matriz[2][3];
	cout<< "Llene la matriz 2x3:";
	for(int f=0;f<2;f++){
		for(int c=0;c<3;c++){
			cout<< "Ingrese matriz [" << f << "][" << c << "]: ";
			cin>>matriz[f][c];
		}
	}
	cout<< "La matriz es: "<<endl;
	for(int f=0;f<2;f++){
	for(int c=0;c<3;c++){
	cout<< matriz[f][c]<< " ";
	}	
	cout << endl;
	}
}
