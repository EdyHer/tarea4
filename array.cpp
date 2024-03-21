#include <iostream>
using namespace std;

main(){
	
	int tam=0,suma=0,promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"ingrese nota " <<tam<<":";
		cin>>notas[tam-1];
		cout<<"desea ingresar otra nota(s/n):";
		cin>>res;

	}while(res=='s' ||res=='s');
	
	for(int i=0;i<tam;i++){
		suma+=notas[i];
	}
	promedio = suma/ tam;
	
	cout<<"el promedio es:"<<promedio<<endl;
	
	
	
	system("pause");
}
