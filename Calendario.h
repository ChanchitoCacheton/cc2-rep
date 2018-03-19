#pragma once


#define _CALENDARIO_H

#include <iostream>
#include <string>

using namespace std;

class Calendario{

public:
	//atributos
	int mes,anio;
	//constructores
	Calendario();
	Calendario(int mes,int anio);

	//metodos

	int setMes(int pm);
	int setAnio(int pa);

	void print();





};

