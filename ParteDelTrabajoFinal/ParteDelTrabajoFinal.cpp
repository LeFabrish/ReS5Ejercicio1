#include "pch.h"
#include "Jugabilidad.h"

#include <iostream>
using namespace std;
using namespace System;

int main(cli::array<System::String ^> ^args)
{
    Jugabilidad* juego = new Jugabilidad();
    juego->jugar();
    system("pause");
    delete juego;
    return 0;
}
