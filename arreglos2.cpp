#include <iostream>
using namespace std;
int main(){
	int numeros[100],pares[100], impares[100], n, p=0, im=0;
	cout<<"ingrese el numero de elementos:";
	cin>>n;
	for (int i=0; i<n; i++){
		cout<<"ingrese el elemento:";
		cin>>numeros[i];
		if (numeros[i]%2==0){
			pares[p]=numeros[i];
			p++;
		}else{
			impares[im]=numeros[i];
			im++;
		}
	}
	cout<<"los numeros pares son:"<<endl;
	for(int i=0; i<p; i++){
			cout<<pares[i]<<endl;
	}
	cout<<"los numeros impares son:"<<endl;
	for(int i=0; i<im; i++){
		cout<<impares[i]<<endl;
	}
	return 0;
}