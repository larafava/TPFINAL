
#ifndef CAVION_H
#define CAVION_H


#include <iostream>
#include "cLista.h"
#include "cPasajero.h"
#include "cIata.h"
#include "cAzafatas.h"
#include "cEventos.h"
//#include "cCopiloto.h"

class cMarshall;
class cAzafatas;
class cCopiloto;
class cPersonal;
class cPiloto;
class cIata;
class cEventos;
class cCodigo;


class cAvion {

private: 
	friend class cPasajero;
#pragma region Creacion de listas con template
	cLista<cPersonal>* ListaPersonal; 
	cLista<cPasajero>* ListaPasajeros;
	cLista<cPasajero>* ListaPasajerosdetenidos;
	cLista<cEventos>* evento;
	bool volando;

#pragma endregion
	cIata* Iata;
	cPiloto* piloto;
	cCopiloto* copiloto;
	cMarshall* marshall;
	cAzafatas* azafatadisponible;
public:
#pragma region Constructor y destructor
	cAvion(bool _volando);
	~cAvion();
#pragma endregion

#pragma region Metodos
	void checkin(); //chequea que todos los codigos sean correctos
	void Agregarpasajerodetenido(cPasajero*pasajerodetenido);
	bool estadetenido(cPasajero*pasajero);
	void AgregarPasajero(cPasajero* pasajero);
	bool lugarprision();
	cLista<cPasajero>* getlistapasajero() { return this->ListaPasajeros; };
	cLista<cEventos>* getlistaeventos() { return this->evento; };
	void insertarevento(cEventos* eventos);
	cMarshall* getmarshall();
	cMarshall* AsignarMarshall();
	void aviondespegue();
	void avionaterrizaje();
	cAzafatas* AsignarAzafata();
	void AgregarAzafata(cPersonal*azafatas);
	void setPiloto(cPiloto* piloto);
	void setCopiloto(cCopiloto* copiloto);
	void setVolando(bool vuela);
	cPiloto* getPiloto(); 
	cCopiloto* getCopiloto();
	string to_string();
	void Imprimir();
	void RecibirCodigo(cPasajero*pasajero);// chequeo que este en la lista de codigos validos
	void ImprimirListas();

#pragma endregion
};

#endif