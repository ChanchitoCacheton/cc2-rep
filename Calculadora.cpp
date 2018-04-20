#include "Calculadora.h"

#include <iostream>

using namespace std;

Calculadora::Calculadora(){

	num_1=0;
	num_2=0;

	mod=0;


}

Calculadora::Calculadora(int num_1,int num_2,int mod){

	this->num_1=num_1;
	this->num_1=num_2;

	this->mod=mod;

}

void Calculadora::Suma(){

	cout<<"la suma es: "<<endl;

	cout<<num_1+num_2<<" mod "<<mod;

}

void Calculadora::Resta(){

	int res;
	res= num_1 - num_2;

	while(res<=0){

		res=res+mod;
	}

	cout<<"la resta es: "<<endl;

	cout<<res<<" mod "<<mod;

	cout<<endl;
}

void Calculadora::Multiplicacion(){

	int res;
	res= num_1*num_2;

	cout<<"la Multiplicacion es :"<<endl;

	cout<< res << " mod "<<mod; 

	cout<<endl;

}
int Calculadora::setnum1(int pnum1){

	num_1=pnum1;
	return pnum1;

}

int Calculadora::setnum2(int pnum2){

	num_2=pnum2;
	return pnum2;

}
int Calculadora::setmod(int pmod){

	mod=pmod;
	return pmod;
}

