#include <iostream>
using namespace std;
int main (){
	int numeros[1000], n, s;
	float p, c;
	cout<<"ingrese el numero de elementos:";
	cin>>n;
	c=0; //contador de numeros ceros
	s=0; //suma de numeros almacenados
	for (int i=0; i<n; i++){
		cout<<i+1<<".Ingrese el elemento:";
		cin>>numeros[i];
		if (numeros[i]!=0){
			s=s+numeros[i];
		}else if(numeros[i]==0){
			c=c+1;
		}
	}
	p=(c/n)*100; //porcentaje de los numeros cero
	cout<<"las suma de los elementos es:"<<s<<endl;
	cout<<"el porcentaje de ceros es:"<<p<<endl;
	return 0;
}