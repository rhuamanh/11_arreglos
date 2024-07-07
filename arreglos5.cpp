#include <iostream>
#include <string>
using namespace std;
int main (){
	string fp[100], pg[100], repetidos[100];
	int n1, n2, c=0;
	cout<<"ingrese la cantidad de alumnos de FP:";
	cin>>n1;
	for (int i=0; i<n1; i++){
		cout<<i+1<<".Ingrese el nombre:";
		cin>>fp[i];
	}
	cout<<"ingrese la cantidad de alumnos de PG:";
	cin>>n2;
	for (int i=0; i<n2; i++){
		cout<<i+1<<".Ingrese el nombre:";
		cin>>pg[i];
	}
	for (int i=0; i<n1; i++){
		for (int j=0; j<n2; j++){
			if (fp[i]==pg[j]){
				repetidos[c]=fp[i];
				c++;
			}
		}
	}
	cout<<"los nombres más comunes son:"<<endl;
	for (int i=0; i<c; i++){
		cout<<repetidos[i]<<endl;
	}
	cout<<"en total son:"<<c<<endl;
	return 0;
}