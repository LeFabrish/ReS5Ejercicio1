#include "pch.h"
#include <iostream>
#include <string>
#include "Juego.h"
#include "Personaje.h"
#include "Mago.h"
#include "Guerrero.h"
#include <vector>
using namespace std;
using namespace System;

int main(){
    Juego* juego = new Juego();
    // Agrego personajes
    juego->agregarPersonaje(new Mago("Poter", 100, 20, 10));
    juego->agregarPersonaje(new Guerrero("Kratos", 80, 15, 30));

    // Mostrar estado de los personajes
    cout << "Estado inicial de los personajes:" << endl;
    juego->mostrarPersonajes();
    // Batalla

    cout << "Iniciando la batalla" << endl;
    int ronda = 1;
    while (juego->personajesVivo()) {
        cout << "RONDA " << ronda;
        juego->iniciarBatalla();
        juego->mostrarPersonajes();
        ronda++;
        _sleep(20);
    }
    cout << "Asi acabo" << endl;
    juego->mostrarPersonajes();
    juego->mostrarGanador();
    // Acabando juego
    juego->~Juego();
    delete juego;
    return 0;
}
