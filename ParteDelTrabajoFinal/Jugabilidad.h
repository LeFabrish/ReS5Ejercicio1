#pragma once
#include "Protagonista.h"
#include "Enemigo.h"
#include "Vehiculo.h"
#include "Dron.h"
#include <vector>
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;
using namespace System::Drawing;
class Jugabilidad
{
public:
	Jugabilidad(){}
	~Jugabilidad(){}

	void jugar() {
		// En proceso solo quiero saber si mi gestion de archivos, librerias, logica y de memoria estan bien
		Console::CursorVisible = false; 
		vector<Enemigo*> enemigos;
		// Generando vehiculos
		for (int i = 0; i < 3; i++) {
			enemigos.push_back(new Dron(10 + (i * 4), 2 + (i * 10), 3, 2, true));
		}
		// Generando drones

		for (int i = 0; i < 3; i++) {
			enemigos.push_back(new Vehiculo(10 + (i * 4), 2 + (i * 10), 3, 2, true));
		}

		Protagonista* prota = new Protagonista(1.0, 1.0, 3, 3, 3);
		char tecla = _getch();
		while (true) {
			if(kbhit()){
				prota->mover(tecla);
			}
			_sleep(50);
		}
		delete prota;
		for (int i = 0; i < 3; i++) {
			delete enemigos[i];
		}
	}
};

