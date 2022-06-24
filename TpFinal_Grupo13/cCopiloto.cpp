#include "cCopiloto.h"

cCopiloto::cCopiloto(cAvion* _avion, string _nombre, string _apellido, int _DNI, int _codigoempleado):cPiloto(_avion,_nombre, _apellido, _DNI, _codigoempleado) {

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

void cCopiloto::PedidoDespegueyAterrizaje(cAvion*avion)
{
	cout << "El copiloto hace un pedido para despegue\n" << endl;
	avion->aviondespegue();
		
	cout << "El copiloto hace un pedido para aterrizaje\n" << endl;
	avion->avionaterrizaje();
}
