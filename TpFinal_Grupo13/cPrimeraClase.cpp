#include "cPrimeraClase.h"

cPrimeraClase::cPrimeraClase(string _nombre, string _apellido, int _DNI, string _codigo) :cPasajero(_nombre, _apellido, _DNI, _codigo) {

}

cPrimeraClase::~cPrimeraClase()
{
}

/*bool cPrimeraClase::esturista()
{
	return false;
}

bool cPrimeraClase::esejecutivo()
{
	return false;
}

bool cPrimeraClase::esprimeraclase() {
	return true;
}*/

void cPrimeraClase::TrabajarNotebook() {
	cout << "Esta trabajando con la notebook" << endl;
}
void cPrimeraClase:: Imprimir() {
	cout << to_string() << endl;
}

void cPrimeraClase::generarcodigo()
{
	this->codigo = "PC" + this->DNI+this->fila+this->asiento; //Genero codigo para los de primera clase con su respectivo letras, dni, fila y asiento

}
