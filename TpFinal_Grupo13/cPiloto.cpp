#include "cPiloto.h"

using namespace std;

cPiloto::cPiloto(cAvion* _avion, string _nombre, string _apellido, int _DNI):cPersonal(_avion,_nombre, _apellido, _DNI){

}

cPiloto::~cPiloto()
{
}

void cPiloto::PilotearAvion(cAvion* avion)
{
}

void cPiloto::PedirComidaoBebida(cAzafatas* azafata)
{
}

string cPiloto:: to_string() {
	return this->nombre + "" + this->apellido + "" + std::to_string(this->DNI) + "" + std::to_string(this->codigoempleado)+"";
}

void cPiloto::Imprimir() {
	cout << to_string() << endl;
}

void cPiloto::AnunciosAltavoz()
{
}
