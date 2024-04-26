#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>



using namespace std;

int main()
{



    HANDLE consola;
    consola=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD posicion;
    posicion.X = 18;
    posicion.Y = 15;

    SetConsoleCursorPosition(consola, posicion);
    cout<<"*";

    return 0;
}
