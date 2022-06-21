#pragma once
#include "cPiloto.h"

class cCopiloto:
	public cPiloto
{
public:
#pragma region Constructor y destructor
	cCopiloto(cAvion* _avion, string _nombre, string _apellido, int _DNI);
	~cCopiloto();
#pragma endregion

#pragma region Metodos
	void Imprimir();
	void PedidoDespegueyAterrizaje();
#pragma endregion
};