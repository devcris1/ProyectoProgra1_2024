#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;


int main()
{
    gotoxy(15,60);
    int x=60, y=15;
    int i, j, filas;

    bool salir = false;
    while (!salir){
    gotoxy(x,y);
    if (kbhit()){
        char tecla = getch();
        if(tecla==IZQUIERDA)x=x-1;
        if(tecla==DERECHA)x=x+1;
        if(tecla==ARRIBA)y=y-1;
        if(tecla==ABAJO)y=y+1;
    }
    }

    int n;
    cout << "Introduce la altura del triangulo: ";
    cin >> n;

    // Recorre la altura
    for (i = 1; i <= n - 1; i++)
    {
        // Imprime espacios en blanco por la izquierda
        for (j = 1; j <= n - i; j++)
            cout << " ";

        // Imprime los caracteres "*" y " "
        for (j = 1; j <= 2 * i - 1; j++)
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";

            cout << endl;
    }
    //Imprime "*" última fila
    for (i = 1; i <= 2 * n - 1; i++)
        cout << "*";

    return 0;
}
