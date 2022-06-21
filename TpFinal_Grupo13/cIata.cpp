#include "cIata.h"

using namespace std;

cIata::cIata():cantmaxaviones(100) {
	Listacodigo = NULL;
}

cIata::~cIata()
{
}

void cIata::generarcodigovuelo(cAvion* avion)
{
}

void cIata::Imprimir()
{
}

int cIata::AgregarAvion(cAvion* avion)
{
	return 0;
}

bool cIata::chequearcodigo(string codigo)
{
	return false;
}

void cIata::Agregarcodigo(string codigo)
{
	//if (this->Listacodigo->BuscarAtPos(&codigo) == -1 && chequearcodigo()) // en buscaratpos retorna - 1 si no esta, por lo tanto estoy chequeando que no este en otra lista
		//this->Listacodigo->Insertar(codigo);
}

void cIata::ReservarAsientoMarshall(cAvion* avionasignado, cMarshall* marshall)
{
}
