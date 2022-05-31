#pragma once
#include <iostream>
#include "cPersonal.h"
#include "cAvion.h"

using namespace std;

class cPiloto:
	public cPersonal
{
protected:
	cAvion* avion;
public:
#pragma region Constructor y destructor
	cPiloto(string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cPiloto();
#pragma endregion

#pragma region Metodos
	void Imprimir();
	cAvion* getavion();
	void AnunciosAltavoz();
	void PilotearAvion(cAvion*avion);
	void PedirComidaoBebida(cAzafatas* azafata);
	string to_string();
#pragma endregion
};