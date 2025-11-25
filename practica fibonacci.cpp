#include <iostream>
using namespace std;

int fibonacci(int b){
	if(b==0) return 0;
	if(b==1) return 1;
	return fibonacci(b-1)+fibonacci(b-2);
}
int main(){
	int s;
	cout<< "Ingrese un limite para la funcion: ";
	cin>>s;
	cout << "Serie de Fibonacci: "<<endl;
	for(int i=0;i< s ;i++){
		cout<<fibonacci(i)<< " " ;	
	}
	return 0;
}
