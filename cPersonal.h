#pragma once
#include <string>
#include <iostream>
#include "cPersona.h"

class cPersonal:
	public cPersona
{
protected:
	int codigoempleado;

public:
	//constructor
	cPersonal(string _nombre, string _apellido, int _DNI, int _codigoempleado);
	//getter y setter codigo empleado
};