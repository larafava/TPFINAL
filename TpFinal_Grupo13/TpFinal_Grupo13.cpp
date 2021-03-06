// TpFinal_Grupo13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "cPiloto.h"
#include "cIata.h"
#include "cTurista.h"
#include "cEjecutivo.h"
#include "cPrimeraClase.h"
#include "cMarshall.h"
#include "cAzafatas.h"
#include "cCopiloto.h"
#include "cAvion.h"
#include <stdlib.h>
#include <ctime>
#include "cCodigo.h"

class cEventos;
class cTurista;

int main()
{
	//creo pasajeros, aviones, azafatas, pilotos y copilotos para implementar luego las funciones
	try {
		cAvion* avion1 = new cAvion(true);

		cout << "Imprimo los pasajeros: \n";
		cTurista* pasajero1 = new cTurista("Pedro", "Lopez", 18436114, "TU1843611422A");
		cEjecutivo* pasajero2 = new cEjecutivo("Marta", "Sanchez", 44417808, "BS4441780833B");
		cPrimeraClase* pasajero3 = new cPrimeraClase("Maria", "Corso", 44684941, "PC4468494144C");
		pasajero1->Imprimir();
		pasajero2->Imprimir();
		pasajero3->Imprimir();



		cout << "Imprimo los datos de Marshall: \n";
		cMarshall* marshall = new cMarshall(avion1, "Pepe", "Fava", 43935274, 34888990);
		marshall->Imprimir();

		cout << "Imprimo las azafatas: \n";
		cAzafatas* azafata1 = new cAzafatas(avion1, "Martina", "Quiroga", 40654398, 2837819);
		cAzafatas* azafata2 = new cAzafatas(avion1, "Justina", "Santiago", 38764985, 37545434);
		cAzafatas* azafata3 = new cAzafatas(avion1, "Sol", "Cambiaso", 35874291, 23948371);
		azafata1->Imprimir();
		azafata2->Imprimir();
		azafata3->Imprimir();

		cout << "Imprimo piloto: \n";
		cPiloto* piloto = new cPiloto(avion1, "Agustin", "Gomez", 30457629, 9823473);
		piloto->Imprimir();

		cout << "Imprimo copiloto: \n";
		cCopiloto* copiloto = new cCopiloto(avion1, "Juan", "Panero", 29837498, 23632048);
		copiloto->Imprimir();

		cIata* iata = new cIata();


		//voy agregando las azafatas, piloto, copiloto, pasajeros al avion
		
		avion1->AgregarAzafata(azafata1);
		avion1->AgregarAzafata(azafata2);
		avion1->AgregarAzafata(azafata3);
		avion1->setPiloto(piloto);
		avion1->setCopiloto(copiloto);
		avion1->AgregarPasajero(pasajero1);
		avion1->AgregarPasajero(pasajero2);
		avion1->AgregarPasajero(pasajero3);
		iata->ReservarAsientoMarshall(avion1, marshall); //iata le debe reservar un asiento que no este ocupado
		avion1->checkin(); //revisar que todos los codigos de la lista de pasajeros sean validos
		cLista<cPasajero>* listapasajero = avion1->getlistapasajero();
		
		cAzafatas* azafata = piloto->getavion()->AsignarAzafata();
		piloto->AnunciosAltavoz();
		piloto->PilotearAvion(avion1);
		azafata->AtenderLlamadosPiloto(piloto);
		piloto->PedirComidaoBebida(azafata);
		piloto->getavion()->insertarevento(new cEventos(piloto->to_string() + "\nHizo anuncios por altavoz" + "\nPilotea el avion" + avion1->to_string() + "\nPidio bebida sin alcohol" + "/nAzafata asignada" + azafata->to_string())); //guardo los eventos de piloto
		cout << "\mImprimir eventos";
		
		for (int pos = 0; pos < avion1->getlistaeventos()->getCA(); pos++) {
	
			cout << avion1->getlistaeventos()->Buscar(pos)->to_string();
			
		}


		delete avion1;//elimina el avion y a su vez se encarga de eliminar pasajeros, pilotos,copilotos, marshall y azafatas
	}
	catch (...) {
		cout<<("Se produjo un error");
	}
}
	/*
	//creo pasajeros, aviones, azafatas, pilotos y copilotos para implementar luego las funciones
	try
	{
		
	
		//voy agregando las azafatas, piloto, copiloto, pasajeros al avion
		avion1->AgregarAzafata(Azafata1);
		avion1->AgregarAzafata(Azafata1);
		avion1->setPiloto(piloto);
		avion1->setCopiloto(copiloto);
		iata->AgregarAvion(avion1);
		avion1->AgregarPasajero(pasajero1);
		avion1->AgregarPasajero(pasajero2);
		avion1->AgregarPasajero(pasajero3);
		iata->generarcodigovuelo(avion1); //el avion tiene un codigo de vuelo
		iata->ReservarAsientoMarshall(avion1, marshall); //iata le debe reservar un asiento random que no este ocupado
		avion1->checkin(); //revisar que todos los codigos de la lista de pasajeros sean validos
		cLista<cPasajero>* listapasajero = avion1->getlistapasajero();


		cAzafatas* azafata = piloto->getavion()->AsignarAzafata();
		piloto->AnunciosAltavoz();
		piloto->PilotearAvion(avion1);
		azafata->AtenderLlamadosPiloto(piloto);
		piloto->PedirComidaoBebida(azafata);
		piloto->getavion()->insertarevento("El piloto:" + piloto->to_string() + "Hizo anuncios por altavoz" + "Pilotea el avion" + avion1->to_string() + "Pidio bebida sin alcohol" + "Azafata asignada" + azafata->to_string()); //guardo los eventos de piloto




		int pos;
		for (pos = 0; pos < listapasajero->getCA(); pos++) {
			cPasajero* pasajero = listapasajero->Buscar(pos);

			if (!pasajero->getavion()->estadetenido(pasajero)) {//primero verifico que el pasajero no este detenido para que sucedan estos eventos

				srand((unsigned)time(NULL)); //creo una semilla random para generar eventos y guardarlos
				cout << rand() % 6 + 1 << endl; //rango de 1 a 6
				if (rand() % 6 + 1 == 1) {

					pasajero->cometerdelito();
					avion1->getmarshall()->arrebatopasajero(pasajero);
					if (avion1->lugarprision()) {
						avion1->Agregarpasajerodetenido(pasajero); //primero verifico que haya lugar en la prision y si hay lugar agrega el pasajero detenido a la prision
						pasajero->getavion()->insertarevento("El pasajero:" + pasajero->to_string() + "Quedo detenido" + "Marshall asignado" + marshall->to_string());//guardo el evento si el pasajero queda detenido
					}
				}
				if (rand() % 6 + 1 == 2) {
					try {
						cEjecutivo* ejecutivo = dynamic_cast<cEjecutivo*>(pasajero);
						cAzafatas* azafata = ejecutivo->getavion()->AsignarAzafata();//Guardo la azafata asignada del avion
						azafata->AtenderLlamadosCliente(ejecutivo); //las azafatas no tienen eventos por si mismas sino que atienden los eventos de los pasajeros y pilotos
						ejecutivo->PedirChampagne(azafata);
						azafata->EntregarComidayBebida(ejecutivo);
						ejecutivo->getavion()->insertarevento("El pasajero:" + ejecutivo->to_string() + "pidio Champagne" + "Azafata asignada" + azafata->to_string()); //guardo los eventos que suceden con ejecutivo
						ejecutivo->HacerseMasaje(azafata);
						ejecutivo->getavion()->insertarevento("El pasajero:" + ejecutivo->to_string() + "Pidio que le hagan masajes" + "Azafata asignada" + azafata->to_string());
					}
					catch(exception*ex){
					throw("Excepcion")
					}
				}
				if (rand() % 6 + 1 == 3) {
					if (pasajero->esprimeraclase()) {
						cPrimeraClase* pasajeroprimclase = dynamic_cast<cPrimeraClase*>(pasajero);
						cAzafatas* azafata = pasajeroprimclase->getavion()->AsignarAzafata();
						pasajeroprimclase->TrabajarNotebook();
						pasajeroprimclase->getavion()->insertarevento("El pasajero::" + pasajeroprimclase->to_string() + "Trabajo con la notebook"); //guardo los eventos que sucedieron con los de primera clase
					}
				}
				if (rand() % 6 + 1 == 4) {
					pasajero->Dormir();
					pasajero->getavion()->insertarevento("El pasajero:" + pasajero->to_string() + "Durmio");
				}
				if (rand() % 6 + 1 == 5) {
					pasajero->IralBanioyVolver();
					pasajero->getavion()->insertarevento("El pasajero" + pasajero->to_string() + "Fue al banio y volvio");
				}
				if (rand() % 6 + 1 == 6) {
					cAzafatas* azafata = pasajero->getavion()->AsignarAzafata();
					azafata->AtenderLlamadosCliente(pasajero);
					pasajero->LlamarAzafata(azafata);
					pasajero->PedirComidayBebida(azafata);
					azafata->EntregarComidayBebida(pasajero);
					pasajero->getavion()->insertarevento("El pasajero:" + pasajero->to_string() + "Pidio comida y bebida" + "Azafata asignada" + azafata->to_string());
				}
			}
		}
		copiloto->PedidoDespegueyAterrizaje();
		copiloto->getavion()->insertarevento("El copiloto:" + copiloto->to_string() + "Se comunico con la torre de control para realizar el pedido de despegue y aterrizaje"); //guardo los eventos de copiloto

		//lo mismo pero para avion 2
		avion2->AgregarAzafata(azafata3);
		avion2->AgregarAzafata(azafata4);
		avion2->setPiloto(piloto2);
		avion2->setCopiloto(copiloto2);
		iata->AgregarAvion(avion2);
		avion2->AgregarPasajero(pasajero4);
		avion2->AgregarPasajero(pasajero5);
		avion2->AgregarPasajero(pasajero6);
		iata->generarcodigovuelo(avion2);
		iata->ReservarAsientoMarshall(avion2, marshall2);
		avion2->checkin();
		//cLista<cPasajero>* listapasajeroavion2 = avion2->getlistapasajero();

		/*for (posicion = 0; posicion < listapasajeroavion2->getCA(); posicion++) {
			srand((unsigned)time(NULL));
			cout << rand() % 5 +1 << endl; // rango desde 1 a 5
		}  //Este codigo debe estar en la clase avion y no en el main por lo tanto no lo reutilizo para avion2

		//libero memoria
		delete iata; //se encarga de eliminar los aviones y a su vez se encarga de eliminar pasajeros, pilotos,copilotos, marshall y azafatas
	}
	catch (...) {
		cout << "Se produjo un error" << endl;
	}

	*/


