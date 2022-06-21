#include "cCopiloto.h"

cCopiloto::cCopiloto(cAvion* _avion, string _nombre, string _apellido, int _DNI):cPiloto(_avion,_nombre, _apellido, _DNI) {

}

cCopiloto::~cCopiloto()
{
}

//string cCopiloto::to_string() {
//}	
//
void cCopiloto::Imprimir() {
	cout << to_string() << endl;
}

void cCopiloto::PedidoDespegueyAterrizaje()
{
}
