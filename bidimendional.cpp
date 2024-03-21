#include <iostream>
using namespace std;

main() {
	
	int fil=0,col=0;
	cout<<"ingrese filas:";
	cin>>fil;
	cout<<"ingrese columnas:";
	cin>>col;
	int matriz [fil][col];
	
	cout<<"-----------ingresar----------"<<endl;
	for (int i=0;i<fil;i++){
		for(int ii=0;ii<col;ii++){
			cout<<i<<","<<ii<<": ";
			cin>>matriz[i][ii];
		}
	}
	
	cout<<"-----------mostrar----------"<<endl;
	for (int i=0;i<fil;i++){
		for(int ii=0;ii<col;ii++){
			cout<<i<<","<<ii<<": "<<matriz[i][ii]<<endl;
		}
	}
	
	system("pause");
}
