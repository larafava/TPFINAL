#pragma once
#include <iostream>
#include "cAzafatas.h"
#include "cPasajero.h"
#include <string>
#include "cIata.h"

using namespace std;

class cAvion {

private: 
	friend class cPasajero;
	cIata* iata;
	cLista<cAzafatas>* azafatas;
	cLista<cPasajero>* ListaPasajeros;
	cLista<cPasajero>* ListaPasajerosdetenidos;
	cLista<string>* evento;
public:
#pragma region Constructor y destructor
	cAvion();
	~cAvion();
#pragma endregion

#pragma region Metodos
	void checkin(); //chequea que todos los codigos sean correctos
	void Agregarpasajerodetenido(cPasajero*pasajerodetenido);
	bool estadetenido(cPasajero*pasajero);
	int AgregarPasajero(cPasajero* pasajero);
	bool lugarprision();
	cLista<cPasajero>* getlistapasajero();
	void insertarevento(string eventos);
	cMarshall* getmarshall();
	cMarshall* AsignarMarshall();
	void aviondespegue();
	cAzafatas* AsignarAzafata();
	int AgregarAzafata(cAzafatas*azafatas);
	void setPiloto(cPiloto*piloto);
	void setCopiloto(cCopiloto* copiloto);
	cPiloto* getPiloto(); 
	cCopiloto* getCopiloto();
	string to_string();
	void Imprimir();
	void RecibirCodigo(cPasajero*pasajero);// chequeo que este en la lista de codigos validos
#pragma endregion
};