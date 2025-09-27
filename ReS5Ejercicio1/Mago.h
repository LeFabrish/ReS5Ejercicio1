#pragma once
#include <iostream>
#include <string>
#include "Personaje.h"
using namespace std;

class Mago: public Personaje
{
private:
	int magia;
public:
	Mago(string nombre, int vida, int ataque, int magia)
		: Personaje(nombre, vida, ataque) {
		this->magia = magia;
	}
	void atacar(Personaje* personajeObjetivo) override {
		if(magia > 0){
			cout << nombre << " lanza su bola de fuego a " << personajeObjetivo->getNombre() << "!" << endl;
			int danio = ataque + 10;
			personajeObjetivo->setVida(personajeObjetivo->getVida() - danio);
			magia -= 10;
		} 
		else{
			cout << nombre << " lanza su bola de fuego a " << personajeObjetivo->getNombre() << "!" << endl;
			personajeObjetivo->setVida(personajeObjetivo->getVida() - ataque);

		}
	}
};
