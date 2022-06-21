
#ifndef CAVION_H
#define CAVION_H


#include <iostream>
#include "cLista.h"
#include "cPasajero.h"
//#include "cIata.h"
//#include "cCopiloto.h"

class cMarshall;
class cAzafatas;
class cCopiloto;
class cPersonal;
class cPiloto;

class cAvion {

private: 
	friend class cPasajero;
#pragma region Creacion de listas con template
	cLista<cPersonal>* ListaPersonal; 
	cLista<cPasajero>* ListaPasajeros;
	cLista<cPasajero>* ListaPasajerosdetenidos;
	cLista<string>* evento;

#pragma endregion

public:
#pragma region Constructor y destructor
	cAvion();
	~cAvion();
#pragma endregion

#pragma region Metodos
	void checkin(); //chequea que todos los codigos sean correctos
	void Agregarpasajerodetenido(cPasajero*pasajerodetenido);
	bool estadetenido(cPasajero*pasajero);
	void AgregarPasajero(cPasajero* pasajero);
	bool lugarprision();
	cLista<cPasajero>* getlistapasajero() { return this->ListaPasajeros; };
	void insertarevento(string eventos);
	cMarshall* getmarshall();
	cMarshall* AsignarMarshall();
	void aviondespegue();
	cAzafatas* AsignarAzafata();
	int AgregarAzafata(cAzafatas*azafatas);
	void setPiloto(cPiloto* piloto);
	void setCopiloto(cCopiloto* copiloto);
	cPiloto* getPiloto(); 
	cCopiloto* getCopiloto();
	string to_string();
	void Imprimir();
	void RecibirCodigo(cPasajero*pasajero);// chequeo que este en la lista de codigos validos
#pragma endregion
};

#endif