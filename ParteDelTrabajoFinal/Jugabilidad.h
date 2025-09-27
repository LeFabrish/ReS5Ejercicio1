#pragma once
#include "Protagonista.h"
#include "Enemigo.h"
#include "Vehiculo.h"
#include "Dron.h"
#include <vector>
#include <string>
#include <iostream>
#include <conio.h>      // Para _getch(), _kbhit(), _sleep()
#include <windows.h>    // Para Sleep() (alternativa a _sleep())
#include <cstdlib>      // Para system() y rand()
#include <ctime> 

using namespace std;
using namespace System;
using namespace System::Drawing;
class Jugabilidad
{
private:
    Protagonista* prota;
    vector<Enemigo*> enemigos;
    bool juegoActivo;
public:
    Jugabilidad() {
        juegoActivo = true;
    }
    ~Jugabilidad() {
        limpiarMemoria();
    }
    void agregarObjetos() {}
    void eliminarObjetos(){}

    void borrarObjetos() {}
    void moverObjetos(){}
    void dibujarObjetos(){}

    void inicializar() {}
    void procesarInput() {}

    void actualizarEnemigos() {}
    void verificarColisiones() {}
    void mostrarInfo() {}

    void limpiarMemoria() {}

    void jugar() {
        inicializar();

        while (juegoActivo) {
            procesarInput();

            if (!juegoActivo) break;

            actualizarEnemigos();
            verificarColisiones();
            mostrarInfo();

            Sleep(50);
        }
        limpiarMemoria();
    }

};

