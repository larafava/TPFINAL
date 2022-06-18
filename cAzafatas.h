#pragma once
#include <iostream>
#include <string>
#include "cPersonal.h"
#include "cPasajero.h"
#include "cPiloto.h"

using namespace std;

class cAzafatas :
	public cPersonal
{
public:
#pragma region Constructor y destructor
	cAzafatas(string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cAzafatas();
#pragma endregion

#pragma region Metodos
	void Imprimir();
	void AtenderLlamadosCliente(cPasajero*pasajero);
	void AtenderLlamadosPiloto(cPiloto*piloto);
	void EntregarComidayBebida(cPasajero*pasajero);
	string to_string();
#pragma endregion
};