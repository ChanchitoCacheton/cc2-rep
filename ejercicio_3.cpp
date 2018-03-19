// input: mes , anio

//output : calendario, 

//restricciones : bisiestos , meses

#include "Calendario.h"

#include <iostream>
#include <string>

using namespace std;

int main(){


	int year;
	int month;

	do{

		cout<<"Input year:"<<endl;
		cin>>year;

	}while(year<0 || year>9999);

	cout<<endl;

	do{

			cout<<"Input month:"<<endl;
			cin>>month;

	}while(month<1 || month>12);

	cout<<"///////Input Received///////"<<endl;

	Calendario A;

	A.setMes(month);

	A.setAnio(year);

	A.print();



}