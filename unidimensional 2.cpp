#include <iostream>
using namespace std;

int main(){
	string matriz[2][2];
	for(int f=0;f<2;f++){
		for(int c=0;c<2;c++){
			cout << "Ingrese los nombres [" << f << "][" << c << "]: ";
			cin>>matriz[f][c];
			
	}
	}
	cout<< "La matriz es: "<<endl;
for(int f=0;f<2;f++){
	for(int c=0;c<2;c++){
	cout<< matriz[f][c]<< " ";
	}
	cout << endl;	
	}
	}	
