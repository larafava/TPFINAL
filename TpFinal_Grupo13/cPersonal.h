
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
	const int codigoempleado;
	static int contcodigo;

public:
	//constructor
	cPersonal(cAvion* _avion, string _nombre, string _apellido, int _DNI);
	~cPersonal();
	string to_string();
	//getter y setter codigo empleado
};

#endif