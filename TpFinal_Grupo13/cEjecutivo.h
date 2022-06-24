#pragma once
#include "cPasajero.h"

class cAzafatas;

class cEjecutivo :
	public cPasajero {
public:
#pragma region Constructor y destructor
	cEjecutivo(string _nombre, string _apellido, int _DNI, string _codigo);
	~cEjecutivo();
#pragma endregion

#pragma region Metodos
	void Imprimir();
	void HacerseMasaje(cAzafatas*azafata);
	void PedirChampagne(cAzafatas*azafata);
	void generarcodigo();
#pragma endregion
};