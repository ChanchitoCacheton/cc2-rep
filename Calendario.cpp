#include "Calendario.h"
#include <iostream>
#include <string>

using namespace std;


Calendario::Calendario(){


	anio=0;
	mes=0;


}

Calendario::Calendario(int mes,int anio){

	this->mes=mes;
	this->anio=anio;

}


int Calendario::setMes(int pm){


	mes=pm;

	return pm;

}


int Calendario::setAnio(int pa){

	anio=pa;

	return pa;

}




void Calendario::print(){	

	int dias_Mes;
	bool is_Leapyear= false;
	int zeller;

	//parametros de Zeller:

	int a = (14 - mes) /12;
	int y = anio -a ;
	int m= mes +12 * a -2 ;
	int day_zeller = 1;
	int d= (day_zeller +y + y/4 - y/100 +y/400 + (31*m) /12 ) % 7;
	int z=d;


	if ((anio%4==0 && anio%100!=0) || (anio%400==0)){

		is_Leapyear=true;
	}
		else
			is_Leapyear=false;


	if(mes==1 || mes==3 || mes || 5 || mes==7 || mes==8 || mes==10 || mes==12){

		dias_Mes=32;
	}
	
	if(mes==2 && is_Leapyear==false){

		dias_Mes=29;

	}
		
	if(mes==2 && is_Leapyear==true){

		dias_Mes=30;
	}
		
	if(mes==4 || mes==6 || mes==9 || mes==11){

		dias_Mes=31;

	}

	cout<<"Year :"<<anio<<endl;

	cout<<"Month :"<<mes<<endl;
	

	if(is_Leapyear == true ){
		cout<<" HINT :[el anio es bisiesto]"<<endl;
	}
		else
			cout<<"HINT :[el anio no es bisiesto]"<<endl;

	cout<<endl;

	cout<<"C A L E N D A R I O "<<endl;

	cout<<"[Dom Lun Mar Mie Jue Vie Sab]"<<endl;

	for (int i = 0; i < d; ++i)
	{
		cout<<"    ";
	}

	switch(mes){

		case 1: 

			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;

				
			}

			cout<<endl;

			;break;
		case 2: 


			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;
			}

			cout<<endl;

			;break;
		case 3: 
			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;
			}

			cout<<endl;

			;break;
		case 4: 
			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;
			}

			cout<<endl;

			;break;
		case 5: 
			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;
			}

			cout<<endl;

			;break;
		case 6: 
			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;
			}

			cout<<endl;

			;break;
		case 7: 
			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;
			}

			cout<<endl;

			;break;
		case 8: 
			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;
			}

			cout<<endl;

			;break;
		case 9: 
			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;
			}

			cout<<endl;

			;break;
		case 10: 
			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;			}

			cout<<endl;

			;break;
		case 11: 
			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;
			}

			cout<<endl;

			;break;
		case 12: 
			for (int dia = 1; dia < dias_Mes; dia++)
			{

				if(dia>=1 && dia<10)
					cout<<"   "<<dia;
					else
						cout<<"  "<<dia;

				z++;
				if(z%7==0)
					cout<<endl;
			}

			cout<<endl;

			;
		/*case 2: is_Leapyear= true? return Febrero_bisiesto : return Febrero;
		case 3: return Marzo;
		case 4: return Abril;
		case 5: return Mayo;
		case 6: return Junio;
		case 7: return Julio;
		case 8:	return Agosto;
		case 9: return Setiembre;
		case 10: return  Octubre;
		case 11: return Noviembre;
		case 12: return Diciembre;
	*/
		break;

	}

}
