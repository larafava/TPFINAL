#include "cPiloto.h"
#include "cAzafatas.h"
#include "cAvion.h"

using namespace std;

cPiloto::cPiloto(cAvion* _avion, string _nombre, string _apellido, int _DNI, int _codigoempleado):cPersonal(_avion,_nombre, _apellido, _DNI,_codigoempleado){

}

cPiloto::~cPiloto()
{
}

void cPiloto::PilotearAvion(cAvion* avion)
{
	avion->setVolando(true);
	cout << "El piloto esta piloteando\n" << endl;
}

void cPiloto::PedirComidaoBebida(cAzafatas* azafata)
{
	//azafata->EntregarComidayBebida();
	cout << "El piloto pidio comida y bebida";

}

string cPiloto:: to_string() {
	return this->nombre + "" + this->apellido + "" + std::to_string(this->DNI) + "" + std::to_string(this->codigoempleado)+"";
}

void cPiloto::Imprimir() {
	cout << to_string() << endl;
}

void cPiloto::AnunciosAltavoz()
{
	cout << "El Piloto realiza anuncios por altavoz" << endl;
}
