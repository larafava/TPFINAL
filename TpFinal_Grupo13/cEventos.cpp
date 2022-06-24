#include "cEventos.h"

using namespace std;

cEventos::cEventos(string _codigo) {
	this->eventos = eventos;
}

void cEventos::setevento(string evento) {
	eventos = evento;
}

string cEventos::to_string()
{
	return this->eventos;
}
