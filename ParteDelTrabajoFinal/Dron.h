#pragma once
#include <string>
#include "Enemigo.h"
using namespace std;
class Dron: public Enemigo
{
private:
	float dy;
public:
	Dron(float x, float y, 
		int ancho, int alto, bool visible): Enemigo(x,y, ancho,alto, visible)	{
		this->dy = 1;
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
		if (visible) {
			Console::SetCursorPosition(x, y);     cout << "T-T";
			Console::SetCursorPosition(x, y + 1); cout << "[.]";
		}
	}
	void mover() override {
		if (visible) {
			borrar();
			if (y + alto> Console::WindowHeight || 
				y < Console::WindowTop + 1) dy *= -1;
			y += dy;
			dibujar();
		}
	}
};

