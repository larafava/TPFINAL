#pragma once
#include <iostream>
#include "cPersona.h"
#include "cAzafatas.h"

using namespace std;

class cPasajero:
	public cPersona
{
protected:
	string codigo;
	cAvion* avionasociado;
public:
#pragma region Constructor y destructor
	cPasajero(string _nombre, string _apellido, int _DNI, string _codigo);
	~cPasajero();
#pragma endregion

#pragma region Metodos
	string to_string();
	cAvion* getavion();
	void PresentarCodigo();
	string getcodigo();
	void cometerdelito();
	void Dormir();
	void PedirComidayBebida(cAzafatas* azafata);
	void LlamarAzafata(cAzafatas* a);
	void IralBanioyVolver();

#pragma region Virtual
	virtual void generarcodigo() = 0;
	virtual bool esturista()=0;
	virtual bool esejecutivo() = 0;
	virtual bool esprimeraclase() = 0;
#pragma endregion
};