#include <iostream>
using namespace std;

void opendoll(int n){
	if(n==1){
		cout<< "Abra la cajta";
		return;
	}
	cout<< "Abriendo cajita " <<n<<endl;
	opendoll(n-1);
	}








int main(){
	int s;
	cout<< "Ingrese el nivel que quiera de la doll: " ;
	cin>>s;
	opendoll(s);
}
