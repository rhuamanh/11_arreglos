#include <iostream>
using namespace std;
int main (){
	int menor=0;
	float minimo[7], maximo[7], prom;
	for (int i=0; i<7; i++){
		cout<<i+1<<".ingrese la temperatura mínima:";
		cin>>minimo[i];
		if (minimo[i]<menor){
			menor=minimo[i];
		}
	}
	for (int i=0; i<7; i++){
		cout<<i+1<<".ingrese la temperatura máxima:";
		cin>>maximo[i];
	}
	for (int i=0; i<7; i++){
		prom=(minimo[i]+maximo[i])/2;
		cout<<i+1<<".el promedio es:"<<prom<<endl;
	}
	return 0;
}