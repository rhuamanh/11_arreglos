#include <iostream>
using namespace std;
	//funcion
void operadores(int n, int c, int multiplos[]){
	for (int i=0; i<c; i++){
		multiplos[i]=n*(i+1);
	}
}
 
int main(){
	int n, c;
	cout<<"ingrese el numero:";
	cin>>n;
	cout<<"ingrese la cantidad de multiplos a obtener:";
	cin>>c;
	int multiplos[c];
	operadores(n, c, multiplos);
	cout<<"\nlos multiplos son:";
	for (int i=0; i<c; i++){
		cout<<endl<<multiplos[i];
	}
	return 0;
}