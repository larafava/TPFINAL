#ifndef CMARSHALL_H
#define CMARSHALL_H
#include <iostream>
#include "cPersonal.h"

class cPasajero;
class cAvion;

class cMarshall:
	public cPersonal
{
public:
#pragma region Constructor y destructor
	cMarshall(cAvion* _avion, string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cMarshall();
#pragma endregion

#pragma region Metodos
	string to_string();
	cPasajero* arrebatopasajero(cPasajero* pasajero);
	void Imprimir();
#pragma endregion
};

#endif