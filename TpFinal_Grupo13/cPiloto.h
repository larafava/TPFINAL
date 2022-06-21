#pragma once
#include <iostream>
#include "cPersonal.h"

using namespace std;
class cAzafatas;

class cPiloto:
	public cPersonal
{

public:
#pragma region Constructor y destructor
	cPiloto(cAvion* _avion, string _nombre, string _apellido, int _DNI);
	~cPiloto();
#pragma endregion

#pragma region Metodos
	void Imprimir();
	void AnunciosAltavoz();
	void PilotearAvion(cAvion* avion);
	void PedirComidaoBebida(cAzafatas* azafata);
	string to_string();
#pragma endregion
};