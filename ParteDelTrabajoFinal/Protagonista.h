#pragma once
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;
using namespace System::Drawing;
class Protagonista
{
private:
	float x, y, dx, dy;
	int ancho, alto, vidas;
public:
	Protagonista(
		float x, float y,
	int ancho,int alto, int vidas){
		this->x = x;	this->y = y;	
		this->dx = 1;	this->dy = 1;
		this->ancho = ancho;	this->alto = alto;
		this->vidas = vidas;
	}
	~Protagonista(){}
	// Setters
	void setX(float x) { this->x = x; }
	void setY(float y) { this->y = y; }
	void setdx(float dx) { this->dx = dx; }
	void setdy(float dy) { this->dy = dy; }
	void setancho(int ancho) { this->ancho = ancho; }
	void setalto(int alto) { this->alto = alto; }
	void setVidas(int vidas) { 
		if(this->vidas >= 0) this->vidas = vidas; }

	// Getters
	float getX() { return this->x; }
	float getY( ) { return this->y; }
	float getdx( ) { return this->dx; }
	float getdy() { return this->dy; }
	int getancho() { return this->ancho; }
	int getalto() { return this->alto; }
	int getVidas() { return this->vidas; }

	// Metodos
	void perderVidas(){
		if (vidas > 0) vidas--;
	}
	void borrar() {
		for (int i = 0; i < 3; i++) {
			Console::SetCursorPosition(x, int(y)+ i); cout << "   ";
		}
	}
	void dibujar() {
		Console::SetCursorPosition(x, int(y));   cout << " o ";
		Console::SetCursorPosition(x, int(y)+1); cout << "/|\\";
		Console::SetCursorPosition(x, int(y)+2); cout << "/ \\";
	}
	void mover(char tecla){
		borrar();
		switch (tecla)
		{
		case 75:// Left
			if (x > Console::WindowLeft + 2)
				x -= dx;
			break;
		case 80:// Abajo
			if (y + alto < Console::WindowHeight)
				y += dy;
			break;
		case 77:// Right
			if (x + ancho < Console::WindowWidth)
				x += dx;
			break;
		case 72:// Arriba
			if (y > Console::WindowTop)
				y -= dy;
			break;
		}
		dibujar();
	}

	// Rectangulo
	Rectangle obtenerRectangle(){
		return Rectangle(x, y, ancho, alto);
	}
};

