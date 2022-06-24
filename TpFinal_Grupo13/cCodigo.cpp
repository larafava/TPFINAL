#include "cCodigo.h"
//if define y eso

using namespace std;

cCodigo::cCodigo(string _codigo) {
	this->codigo = _codigo;
}

cCodigo::~cCodigo() {

}

void cCodigo::setcodigo(string codigoo)
{
	this->codigo = codigoo;
}

string cCodigo::to_string()
{
	return this->codigo;
}
