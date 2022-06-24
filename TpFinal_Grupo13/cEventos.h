#ifndef CEVENTOS_H
#define CEVENTOS_H
#include <string>

using namespace std;

class cEventos
{
	string eventos;

	cEventos(string _eventos);
	~cEventos();

	void setevento(string evento);
	string getevento() { return this->eventos; };

};

#endif