#pragma once

#define _CALCULADORA_H

#include <iostream>

using namespace std;

class Calculadora{

public:

	int num_1,num_2;

	int resultado,cont;

	int mod;

	Calculadora();
	Calculadora(int num_1,int num_2,int mod);

	void Suma();
	void Resta();
	void Multiplicacion();

	int setnum1(int pn1);
	int setnum2(int pn2);
	int setmod(int pmod);

	//void Mod();
	//void invMod();

	//void Print();



};
