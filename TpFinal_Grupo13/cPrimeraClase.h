#pragma once
#include <iostream>
#include "cPasajero.h"

using namespace std;

class cPrimeraClase :
	public cPasajero
{
public:
#pragma region Constructor y destructor
	cPrimeraClase(string _nombre, string _apellido, int _DNI, string _codigo);
	~cPrimeraClase();
#pragma endregion

#pragma region Metodos
	void Imprimir();
	void generarcodigo();
	void TrabajarNotebook();
#pragma endregion
};