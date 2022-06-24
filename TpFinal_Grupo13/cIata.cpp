#include "cIata.h"

using namespace std;

cIata::cIata() {
	this->Listacodigo = new cLista<cCodigo>(100);
}

cIata::~cIata()
{ //libero la memoria
	if (this->Listacodigo != NULL) {
		delete this->Listacodigo;
		this->Listacodigo = NULL;
	}
}


void cIata::Imprimir()
{
	cout << (*Listacodigo);
}



bool cIata::chequearcodigo(cCodigo* codigo)
{
	//if (this->Listacodigo->BuscarAtPos(codigo) > -1) //buscarAtPos devuelve -1 cuando no se encuentra en la lista, por lo tanto para chequear que el codigo sea valido tiene que devolver mayor que -1
		return true;
	//else
		//return false;
	
}

void cIata::Agregarcodigo(cCodigo* codigo)
{
	if (this->Listacodigo->BuscarAtPos(codigo) == -1 && chequearcodigo(codigo)) // en buscaratpos retorna - 1 si no esta, por lo tanto estoy chequeando que no este en otra lista
		this->Listacodigo->Insertar(codigo); //lo agrego si no esta anteriormente
}

void cIata::ReservarAsientoMarshall(cAvion* avionasignado, cMarshall* marshall)
{

}


