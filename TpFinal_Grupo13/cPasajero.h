#pragma once
#include <iostream>
#include "cPersona.h"
class cAzafatas;

class cPasajero:
	public cPersona
{
protected:
	string codigo;
	
public:
#pragma region Constructor y destructor
	cPasajero(string _nombre, string _apellido, int _DNI, string _codigo);
	~cPasajero();
#pragma endregion

#pragma region Metodos
	string to_string();
	string PresentarCodigo();
	void cometerdelito();
	void Dormir();
	void PedirComidayBebida(cAzafatas* azafata);
	void LlamarAzafata(cAzafatas* azafata);
	void IralBanioyVolver();

#pragma region Virtual
	virtual void generarcodigo() = 0;
	virtual bool esturista()=0;
	virtual bool esejecutivo() = 0;
	virtual bool esprimeraclase() = 0;
#pragma endregion

};