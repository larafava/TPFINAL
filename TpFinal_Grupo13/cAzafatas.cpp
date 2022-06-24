#include "cAzafatas.h"
#include "cPiloto.h"

cAzafatas::cAzafatas(cAvion* _avion, string _nombre, string _apellido, int _DNI, int _codigoempleado):cPersonal(_avion, _nombre, _apellido, _DNI, _codigoempleado){

}

cAzafatas::~cAzafatas()
{
}

void cAzafatas::Imprimir()
{
	cout << to_string() << endl;
}

void cAzafatas::AtenderLlamadosCliente(cPasajero* pasajero)
{
	pasajero->LlamarAzafata(this);
}

void cAzafatas::AtenderLlamadosPiloto(cPiloto* piloto)
{

		piloto->PedirComidaoBebida(this);
}

void cAzafatas::EntregarComidayBebida(cPasajero* pasajero)
{
	pasajero->PedirComidayBebida(this);
}

string cAzafatas::to_string()
{
	return string();
}
