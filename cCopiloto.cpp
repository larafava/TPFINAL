#include "cCopiloto.h"

using namespace std;

cCopiloto::cCopiloto(string _nombre, string _apellido, int _DNI, int _codigoempleado) :cPiloto(_nombre, _apellido, _DNI, _codigoempleado) {

}

//string cCopiloto::to_string() {
//}	
//
void cCopiloto::Imprimir() {
	cout << to_string() << endl;
}