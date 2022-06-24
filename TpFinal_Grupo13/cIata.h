#ifndef CIATA_H
#define CIATA_H
#include "cLista.h"

class cMarshall;
class cPasajero;
class cAvion;
class cCodigo;

class cIata {
private:
	
	cLista<cCodigo>* Listacodigo;


public:
#pragma region Constructor y destructor
	cIata();
	~cIata();
#pragma endregion

	
#pragma region Metodos
	//void generarcodigovuelo(cAvion*avion); No se necesita realizar esta funcion ya que el tp se enfoca mas en los codigos de pasajeros y marshall
	void Imprimir();
	 bool chequearcodigo(cCodigo* codigo);
	void Agregarcodigo(cCodigo* codigo);
	void ReservarAsientoMarshall(cAvion*avionasignado, cMarshall*marshall);

#pragma endregion
};

#endif