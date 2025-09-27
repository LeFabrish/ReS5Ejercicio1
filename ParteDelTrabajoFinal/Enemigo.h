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
	float getX() { return this->x; }
	float getY() { return this->y; }
	int getancho() { return this->ancho; }
	int getalto() { return this->alto; }
	bool getVisible() { return this->visible; }

	// Metodos
	virtual void borrar() = 0;
	virtual void dibujar() = 0;
	virtual void mover() = 0;

	// Rectangukoi 
	Rectangle getRectangulo() { return Rectangle(x, y, ancho, alto); }
};

