#pragma once
#include "cLista.h"

class cMarshall;
class cPasajero;
class cAvion;

class cIata {
private:
	
	cLista<string>* Listacodigo;
//	cLista<cAvion>* ListaAvion;
	const int cantmaxaviones;

public:
	static int cantAviones;
#pragma region Constructor y destructor
	cIata();
	~cIata();
#pragma endregion

	
#pragma region Metodos
	void generarcodigovuelo(cAvion*avion);
	void Imprimir();
	//string to_string();
	int AgregarAvion(cAvion* avion);
	bool chequearcodigo(string codigo);
	void Agregarcodigo(string codigo);
	void ReservarAsientoMarshall(cAvion*avionasignado, cMarshall*marshall);
#pragma endregion
};