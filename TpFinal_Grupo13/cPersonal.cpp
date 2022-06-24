#include "cPersonal.h"

using namespace std;

int cPersonal::contcodigo = 0;

cPersonal::cPersonal(cAvion* _avion, string _nombre, string _apellido, int _DNI, int _codigoempleado):cPersona(_nombre, _apellido, _DNI),codigoempleado(contcodigo++){
	this->avionasociado = _avion;
	this->codigoempleado = _codigoempleado;
}

cPersonal::~cPersonal()
{
	if (this->avionasociado != NULL) {
		delete this->avionasociado;
		this->avionasociado = NULL;
	}
}

string cPersonal::to_string()
{
	return string();
}

void cPersonal::inicializarcont()
{
	contcodigo = 0;
}
