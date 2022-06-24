#ifndef CAZAFATA_H
#define CAZAFATA_H
#include <iostream>
#include "cPersonal.h"
#include "cPasajero.h"

class cPiloto;

class cAzafatas :
	public cPersonal
{
public:
#pragma region Constructor y destructor
	cAzafatas(cAvion* _avion, string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cAzafatas();
#pragma endregion

#pragma region Metodos
	void Imprimir();
	void AtenderLlamadosCliente(cPasajero* pasajero);
	void AtenderLlamadosPiloto(cPiloto* piloto);
	void EntregarComidayBebida(cPasajero* pasajero);
	string to_string();
#pragma endregion
};
#endif