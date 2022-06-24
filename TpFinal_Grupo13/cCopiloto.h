#ifndef CCOPILOTO_H
#define CCOPILOTO_H
#include "cPiloto.h"
#include "cAvion.h"

class cCopiloto:
	public cPiloto
{
public:
#pragma region Constructor y destructor
	cCopiloto(cAvion* _avion, string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cCopiloto();
#pragma endregion

#pragma region Metodos
	void Imprimir();
	void PedidoDespegueyAterrizaje(cAvion*avion);
#pragma endregion
};
#endif