#include "cAvion.h"

using namespace std;

cAvion::cAvion() {
	this->ListaPasajeros = new cLista<cPasajero>(20);
	this->ListaPasajerosdetenidos = new cLista<cPasajero>(10);
	this->ListaPersonal = new cLista<cPersonal>(40);
	this->evento = new cLista<string>(50);
}
cAvion::~cAvion()
{
}

void cAvion::AgregarPasajero(cPasajero* pasajero) {
	if(this->ListaPasajeros->BuscarAtPos(pasajero)==-1) // en buscaratpos retorna - 1 si no esta, por lo tanto estoy chequeando que no este en otra lista
		this->ListaPasajeros->Insertar(pasajero); //lo inserto si no esta
}

bool cAvion::lugarprision()
{
	return false;
}

void cAvion::checkin()
{
}

void cAvion::Agregarpasajerodetenido(cPasajero* pasajerodetenido)
{
	if (this->ListaPasajerosdetenidos->BuscarAtPos(pasajerodetenido) == -1) // en buscaratpos retorna - 1 si no esta, por lo tanto estoy chequeando que no este en otra lista
		this->ListaPasajerosdetenidos->Insertar(pasajerodetenido);
}

bool cAvion::estadetenido(cPasajero* pasajero) {
	bool tor = false;
	if (this->ListaPasajerosdetenidos->BuscarAtPos(pasajero)>-1) {
		tor = true;
	}
	return tor;

}

void cAvion::insertarevento(string eventos) {
	this->evento->Insertar(&eventos);
}

cMarshall* cAvion::getmarshall()
{
	return nullptr;
}

cMarshall* cAvion::AsignarMarshall()
{
	return nullptr;
}

void cAvion::aviondespegue()
{

}

cAzafatas* cAvion::AsignarAzafata()
{
	return nullptr;
}

int cAvion::AgregarAzafata(cAzafatas* azafatas)
{
	return 0;
}

void cAvion::setPiloto(cPiloto* piloto)
{
}

void cAvion::setCopiloto(cCopiloto* copiloto)
{
}

cPiloto* cAvion::getPiloto()
{
	return nullptr;
}

cCopiloto* cAvion::getCopiloto()
{
	return nullptr;
}

string cAvion::to_string()
{
	return string();
}

void cAvion::Imprimir()
{
}

void cAvion::RecibirCodigo(cPasajero* pasajero)
{
}
