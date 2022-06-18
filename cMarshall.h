#pragma once
#include <iostream>
#include "cPersonal.h"
#include "cPasajero.h"

using namespace std;

class cMarshall:
	public cPersonal
{
public:
#pragma region Constructor y destructor
	cMarshall(string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cMarshall();
#pragma endregion

#pragma region Metodos
	string to_string();
	cPasajero* arrebatopasajero(cPasajero*pasajero);
	void Imprimir();
	
};