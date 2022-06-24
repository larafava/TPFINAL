#pragma once
#include "cPasajero.h"

class cTurista :
	public cPasajero
{
public:
#pragma region Constructor y destructor
	cTurista(string _nombre, string _apellido, int _DNI, string _codigo);
	~cTurista();
#pragma endregion

#pragma region Metodos
	void Imprimir();
	void generarcodigo();
#pragma endregion
};