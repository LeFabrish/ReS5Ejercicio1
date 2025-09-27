#pragma once
#include <string>
#include "Enemigo.h"
using namespace std;
class Dron: public Enemigo
{
private:
	float dy;
public:
	Dron(float x, float y, float dy, 
		int ancho, int alto, bool visible): Enemigo(x,y, ancho,alto, visible)	{
		this->dy = dy;
	}
};

