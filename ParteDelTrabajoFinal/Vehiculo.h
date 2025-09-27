#pragma once
#include <string>
#include "Enemigo.h"
using namespace std;
class Vehiculo: public Enemigo
{
private:
	float dx;
public:
	Vehiculo(float x, float y,
		int ancho, int alto, bool visible) : Enemigo(x, y, ancho, alto, visible) {
		this->dx = -1;
	}
	void borrar() override {
		Console::SetCursorPosition(x, y);
		for (int i = 0; i < alto; i++) {
			Console::SetCursorPosition(x, y + i);
			for (int j = 0; j < ancho; j++) {
				cout << " ";
			}
		}
	}
	void dibujar() override {
		if (visible) {// ancho 10, alto 5
			Console::SetCursorPosition(x, y);     cout << "  ______  ";
			Console::SetCursorPosition(x, y + 1); cout << " /o|| \\ \\ ";
			Console::SetCursorPosition(x, y + 2); cout << "|" << char(170) << char(170) << "|| _| |";
			Console::SetCursorPosition(x, y + 3); cout << "|_ ___ __|";
			Console::SetCursorPosition(x, y + 4); cout << "  O   O   ";
		}
	}
	void mover() override {
		if (visible) {
			borrar();
			if (x+2 < Console::WindowLeft) x = Console::WindowWidth - ancho - 1;
			x += dx;
			dibujar();
		}
	}
};
