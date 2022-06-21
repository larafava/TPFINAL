#include "cTurista.h"

using namespace std;

cTurista::cTurista(string _nombre, string _apellido, int _DNI, string _codigo) :cPasajero(_nombre, _apellido, _DNI, _codigo) {

}

cTurista::~cTurista()
{
}

bool cTurista::esejecutivo()
{
	return false;
}

bool cTurista::esprimeraclase()
{
	return false;
}

void cTurista::Imprimir() {
	cout << to_string() << endl;
}

void cTurista::generarcodigo()
{
}
