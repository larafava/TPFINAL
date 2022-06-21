#include "cPersonal.h"

using namespace std;

int cPersonal::contcodigo = 0;

cPersonal::cPersonal(cAvion* _avion, string _nombre, string _apellido, int _DNI):cPersona(_nombre, _apellido, _DNI),codigoempleado(contcodigo++){
	avionasociado = _avion;
}

cPersonal::~cPersonal()
{
}

string cPersonal::to_string()
{
	return string();
}
