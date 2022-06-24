#include "cTurista.h"

using namespace std;

cTurista::cTurista(string _nombre, string _apellido, int _DNI, string _codigo) :cPasajero(_nombre, _apellido, _DNI, _codigo) {

}

cTurista::~cTurista()
{
}



void cTurista::Imprimir() {
	cout << to_string() << endl;
}

void cTurista::generarcodigo()
{
	this->codigo = "TU" + this->DNI + this->fila + this->asiento;
}
