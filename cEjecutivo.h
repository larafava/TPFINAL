#pragma once
#include <iostream>
#include "cPasajero.h"

using namespace std;

class cEjecutivo :
	public cPasajero {
public:
#pragma region Constructor y destructor
	cEjecutivo(string _nombre, string _apellido, int _DNI, string _codigo);
	~cEjecutivo();
#pragma endregion

#pragma region Metodos
	bool esturista();
	bool esejecutivo();
	bool esprimeraclase();
	void Imprimir();
	void HacerseMasaje(cAzafatas*azafata);
	void PedirChampagne(cAzafatas*azafata);
	//string to_string();
	void generarcodigo();
#pragma endregion
};