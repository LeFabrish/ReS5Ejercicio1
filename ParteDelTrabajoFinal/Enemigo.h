#pragma once
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;
using namespace System::Drawing;
class Enemigo
{
protected:
	float x, y;
	int ancho, alto;
	bool visible;
public:
	Enemigo(
		float x, float y,
		int ancho, int alto, bool visible) {
		this->x = x;	this->y = y;
		this->ancho = ancho;	this->alto = alto;
		this->visible = visible;
	}
	~Enemigo() {}
	// Setters
	void setX(float x) { this->x = x; }
	void setY(float y) { this->y = y; }
	void setancho(int ancho) { this->ancho = ancho; }
	void setalto(int alto) { this->alto = alto; }
	void setVisible(bool visible) { this->visible = visible; }

	// Getters
	float getX(float x) { return this->x; }
	float getY(float y) { return this->y; }
	int getancho(int ancho) { return this->ancho; }
	int getalto(int alto) { return this->alto; }
	bool getVisible(bool visible) { return this->visible; }

	// Metodos
	void borrar() {}
	void dibujar() {}
	void mover() {}

};

