#pragma once
#include <iostream>
#include <string>
using namespace std;
class Personaje
{
protected:
	string nombre;
	int vida;
	int ataque;
public:
	Personaje(string nombre, int vida, int ataque) {
		this->nombre = nombre;
		this->vida = vida;
		this->ataque = ataque;
	}
	// Setters
	void setVida(int _vida) { 
		if (_vida < 0) {
			vida = 0;
		}
		else {
			vida = _vida;
		}
	}
	void setNombre(string _nombre) { this->nombre = _nombre; }
	// Getters
	string getNombre() { return this->nombre; }
	int getVida() { return this->vida; }
	

	virtual void atacar(Personaje* personajeObjetivo) = 0;
	void mostrarEstado(){
		cout << nombre << " tiene " << vida << " puntos de vida." << endl;
	}
	bool estaVivo(){
		return vida > 0;
	}
};

