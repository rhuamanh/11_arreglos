//ejercicio de arreglos 1 
#include <iostream>
using namespace std;
int main (){
	int n, num, i, c, s;
	float p;
	int arreglo [n];
	i=0;
	s=0;
	c=0;
	cout << "ingrese la cantidad total de numeros:";
	cin >> n;
	for (i=0; i<=n; i++){
		if (arreglo[i]!=0){
			cout << "ingrese el valor del primer numero:";
			cin >> num;
			s = s + num;
		} else if (arreglo[i]==0){
			c=c+1;
		}
	}
	p = (c/n)*100;
	cout << "la sumatoria es:" << s << endl;
	cout << "el porcentaje de ceros es:" << p << endl;
	return 0;
}