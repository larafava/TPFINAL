#pragma once
#include "cLista.h"
#include <iostream>
#include "cPasajero.h"
#include "cMarshall.h"

using namespace std;

class cIata {
private:
	
	cLista<string>* Listacodigo;
//	cLista<cAvion>* ListaAvion;
	
	const int cantmaxaviones=100;
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