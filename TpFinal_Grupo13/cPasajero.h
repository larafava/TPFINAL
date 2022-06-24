#ifndef CPASAJERO_H
#define CPASAJERO_H


#include <iostream>
#include "cPersona.h"
#include "cCodigo.h"

class cAzafatas;

class cPasajero:
	public cPersona
{
protected:
	string codigo;
	int fila;
	char asiento;
	
public:
#pragma region Constructor y destructor
	cPasajero(string _nombre, string _apellido, int _DNI, string _codigo);
	~cPasajero();

#pragma endregion

#pragma region Metodos
	string to_string();
	cCodigo* PresentarCodigo();
	void cometerdelito();
	void Dormir();
	void PedirComidayBebida(cAzafatas* azafata);
	void LlamarAzafata(cAzafatas* azafata);
	void IralBanioyVolver();



};

#endif