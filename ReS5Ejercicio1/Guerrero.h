#pragma once
#include <iostream>
#include <string>
#include "Personaje.h"
using namespace std;

class Guerrero: public Personaje
{
private:
	int velocidad;
public:
	Guerrero(string nombre, int vida, int ataque, int velocidad)
		: Personaje(nombre, vida, ataque) 
	{
		this->velocidad = velocidad;
	}
	void atacar(Personaje* personajeObjetivo) override {
		cout << nombre << " ataca con su espada a " << personajeObjetivo->getNombre() << "!" << endl;
		personajeObjetivo->setVida(personajeObjetivo->getVida() - ataque) ;
	}
};

