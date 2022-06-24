#ifndef CCODIGO_H
#define CCODIGO_H
#include <string>

using namespace std;

class cCodigo
{
public:
	string codigo;
	cCodigo(string _codigo);
	~cCodigo();
	void setcodigo(string codigoo);
	string getcodigo() { return this->codigo; };
	string to_string();
};

#endif
