#pragma once
#include <vector>
#include "Personaje.h"

class Juego
{
private:
	vector<Personaje*> personajes; // Generalización
public: 
	Juego(){
	}
	~Juego(){
		for each (Personaje* personaje in personajes) {
			delete personaje;
		}
	}
	void agregarPersonaje(Personaje* personaje){
		personajes.push_back(personaje);
	}
	void mostrarPersonajes() {
		for each (Personaje* personaje in personajes)
		{
			personaje->mostrarEstado();
		}
	}
	void iniciarBatalla(){
		if (personajes.size() >= 2) {
			personajes[0]->atacar(personajes[1]);
			if (personajes[1]->estaVivo()) {
				personajes[1]->atacar(personajes[0]);
			}
		}
		else { cout << "No hay suficientes personajes para iniciar la batalla" << endl; }
	}

	bool personajesVivo() {
		return personajes[0]->estaVivo() && personajes[1]->estaVivo();
	}
	void mostrarGanador() {
		if (personajes[0]->estaVivo()) {
			cout << personajes[0]->getNombre() << " ganó" << endl;
		}
		else if(personajes[1]->estaVivo()) {
			cout << personajes[1]->getNombre() << " ganó" << endl;
		}
		else {
			cout << "Empataron :O" << endl;
		}
	}
};

