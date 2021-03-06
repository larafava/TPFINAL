#include "cPasajero.h"
#include "cAzafatas.h"

using namespace std;

cPasajero::cPasajero(string _nombre, string _apellido, int _DNI, string _codigo):cPersona(_nombre,_apellido,_DNI) {
	this->codigo = _codigo;
}
cPasajero::~cPasajero()
{
}

void cPasajero:: Dormir() {
	cout << "El pasajero esta durmiendo" << endl;
}
void cPasajero::PedirComidayBebida(cAzafatas* azafata)
{
	azafata->EntregarComidayBebida(this);
}
void cPasajero::LlamarAzafata(cAzafatas* azafata)
{
	azafata->AtenderLlamadosCliente(this);
}
void cPasajero::IralBanioyVolver()
{
	cout << "Va al ba?o y vuelve" << endl;
}
string cPasajero::to_string() {
	return "El nombre del pasajero es: " + this->nombre +"\n"+ "El apellido del pasajero es: " + this->apellido +"\nEl dni es: "+ std::to_string(this->DNI) + "\nEl codigo es: " + this->codigo + "";
}

cCodigo* cPasajero:: PresentarCodigo() {
	return new cCodigo(this->codigo);
}

void cPasajero::cometerdelito()
{
	cout << "Cometio delito" << endl;
}
