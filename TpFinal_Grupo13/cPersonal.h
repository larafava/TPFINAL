
#ifndef CPERSONAL_H
 #define CPERSONAL_H

#include <string>
#include <iostream>
#include "cPersona.h"

class cAvion;

using namespace std;

class cPersonal:
	public cPersona
{
protected:
	cAvion* avionasociado;
	 int codigoempleado;
	static int contcodigo;

public:
	
	cPersonal(cAvion* _avion, string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cPersonal();
	static void inicializarcont();
	string to_string();
	cAvion* getavion() { return this->avionasociado; };
};

#endif