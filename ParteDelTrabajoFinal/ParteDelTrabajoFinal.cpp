#include "pch.h"
#include <iostream>
using namespace std;
using namespace System;

int main(cli::array<System::String ^> ^args)
{
    Console::SetWindowSize(ANCHO, ALTO);
    cout << "Hola mundo" << endl;

    system("pause");
    return 0;
}
