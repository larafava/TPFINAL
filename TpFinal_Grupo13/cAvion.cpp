#include "cAvion.h"

using namespace std;

cAvion::cAvion(bool _volando) {
	this->ListaPasajeros = new cLista<cPasajero>(20);
	this->ListaPasajerosdetenidos = new cLista<cPasajero>(10);
	this->ListaPersonal = new cLista<cPersonal>(40);
	this->evento = new cLista<cEventos>(50);
	this->volando = _volando;
}
cAvion::~cAvion()
{ //libero la memoria
	if (this->Iata != NULL) {
		delete this->Iata;
		this->Iata = NULL;
	if (this->copiloto != NULL) {
	delete this->copiloto;
	this->copiloto = NULL;
		}
	}
	if (this->piloto != NULL) {
		delete this->piloto;
		this->piloto = NULL;
	}
	if (this->marshall != NULL) {
		delete this->marshall;
		this->marshall = NULL;
	}
	if (this->ListaPasajeros != NULL) {
		delete this->ListaPasajeros;
		this->ListaPasajeros = NULL;
	}
	if (this->ListaPasajerosdetenidos != NULL) {
		delete this->ListaPasajerosdetenidos;
		this->ListaPasajerosdetenidos = NULL;
	}
	if (this->ListaPersonal != NULL) {
		delete this->ListaPersonal;
		this->ListaPersonal = NULL;
	}
}

void cAvion::AgregarPasajero(cPasajero* pasajero) {
	if(this->ListaPasajeros->BuscarAtPos(pasajero)==-1) // en buscaratpos retorna - 1 si no esta, por lo tanto estoy chequeando que no este en otra lista
		this->ListaPasajeros->Insertar(pasajero); //lo inserto si no esta
}

bool cAvion::lugarprision()
{
	if (this->ListaPasajerosdetenidos->getCA() < 150) //150 ES LA CANTIDAD MAX EN LISTA TMAX entonces 150 es la capacidad total, si es menor a esa cantidad significa que hay lugar
		return true;
}

void cAvion::checkin()
{
	for (int pos = 0; pos < this->ListaPasajeros->getCA(); pos++) {
		cCodigo*codigo=this->ListaPasajeros->Buscar(pos)->PresentarCodigo();
		this->Iata->chequearcodigo(codigo);
	}
}

void cAvion::Agregarpasajerodetenido(cPasajero* pasajerodetenido)
{ // primero verifico que no este en la lista antes de agregarlo
	if (this->ListaPasajerosdetenidos->BuscarAtPos(pasajerodetenido) == -1) // en buscaratpos retorna - 1 si no esta, por lo tanto estoy chequeando que no este en otra lista
		this->ListaPasajerosdetenidos->Insertar(pasajerodetenido);
}

bool cAvion::estadetenido(cPasajero* pasajero) {
	bool tor = false;
	if (this->ListaPasajerosdetenidos->BuscarAtPos(pasajero)>-1) { //si se encuentra en la lista de detenidos devuelve true
		tor = true;
	}
	return tor;

}

void cAvion::insertarevento(cEventos* eventos) { //cada vez que suceda un evento durante el vuelo lo agregamos a la lista
	this->evento->Insertar(eventos);
}



cMarshall* cAvion::getmarshall()
{
	return this->marshall;
}

cMarshall* cAvion::AsignarMarshall()
{
	//this->marshall = _marshall;
}


cAzafatas* cAvion::AsignarAzafata() //se le asigna una azafata al avion
{
	return nullptr;
}

void cAvion::AgregarAzafata(cPersonal* azafatas) //se agrega azafata que esta dentro de la lista de personal al avion
{
	
	cPersonal* personal = azafatas; //se crea una nueva azafata del tipo personal
	try {//hago un try catch por si no se pudo hacer el dynamic cast correctamente y por lo tanto no se pudo agregar azafata
		cAzafatas* azafata = dynamic_cast<cAzafatas*>(azafatas);
		if (this->ListaPersonal->BuscarAtPos(personal) == -1) // en buscaratpos retorna - 1 si no esta, por lo tanto estoy chequeando que no este en otra lista

			 this->ListaPersonal->Insertar(azafatas);
	} 
	catch (exception*x) {
		cout << "Fallo dynamic cast, no se pudo agregar azafata" << endl;
	}
}

void cAvion::setPiloto(cPiloto* piloto)
{
	this->piloto = piloto;
}

void cAvion::setCopiloto(cCopiloto* copiloto)
{
	this->copiloto = copiloto;
}

void cAvion::setVolando(bool vuela)
{
		volando = vuela;
}

cPiloto* cAvion::getPiloto()
{
	return this->piloto;
}

cCopiloto* cAvion::getCopiloto()
{
	return this->copiloto;
}

string cAvion::to_string()
{
	return string();
}

void cAvion::Imprimir()
{
	cout << to_string() << endl;
}

void cAvion::RecibirCodigo(cPasajero* pasajero)
{
	
	if  (!this->Iata->chequearcodigo(pasajero->PresentarCodigo())) { //solamente tira una excepcion si el codigo es el incorrecto
		throw("Excepcion, el codigo es invalido");                  //es decir, que no coincide con la lista de codigos de Iata
	}
}

void cAvion::ImprimirListas()
{
	cout << (*ListaPasajeros);
	cout << (*ListaPasajerosdetenidos);
	cout << (*ListaPersonal);
	cout << (*evento);
}


void cAvion::aviondespegue() { 
	if (volando)
		throw new exception("El avion ya se encuentra en el aire");
	volando = true;
}

void cAvion::avionaterrizaje()
{
	if (!volando)
		throw new exception("El avion ya se encuentra en tierra");
	volando = false;
}
