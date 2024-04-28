#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

using namespace std;

void cuadrado();
void rectangulo();
void triangulo();

int main(){
	int i,j,n,opcion=9;

	do{
		if(opcion==0){
			break;
		}
		cout << "\t\tIngrese una opcion:\n";
		cout << "\t1)Cuadrado\n";
		cout << "\t2)Rectangulo\n";
		cout << "\t3)Triangulos Rectangulos\n";
		cout << "\t0)Salir\n";
		opcion = getch();
		opcion=opcion-48;
		system("cls");
		if(opcion>=4 || opcion<0){
 			cout << "OPCION INCORRECTA";
			continue;
		}
		switch(opcion){
			case 1:
                cuadrado();
				cout << "\t Deseas regresar al menu 1:Si / 0:No";
				opcion=getch();
				opcion=opcion-48;
				system("cls");
				break;
			case 2:
				rectangulo();
				cout << "\t Deseas regresar al menu 1:Si / 0:No";
				opcion=getche();
				opcion=opcion-48;
				system("cls");
				break;
			case 3:
				triangulo();
				cout << "\t Deseas regresar al menu 1:Si / 0:No";
				opcion=getche();
				opcion=opcion-48;
				system("cls");
				break;
		}
	}while(opcion!=0);

}


void cuadrado(){
int i,j,n,tipo;
do{
cout << "\t\tCuadrado\n";
cout << "\t1)Contorno\n";
cout << "\t2)Relleno\n";
//Ingrese la opcion
tipo=getche();
tipo=tipo-48;
system("cls");
switch(tipo){
	case 1://CONTORNO CUADRADO
		cout << "Ingrese la dimension del Cuadrado\n";
		cin  >> n;
		cout << "\n";
		for(i=0;i<n;i++){//Algoritmo
			for(j=0;j<n;j++){
				if(j==0 || j==n-1 || i==0 || i==n-1){
				cout << ("* ");
				}else{
					cout << ("  ");
				}

			}
			cout << ("\n");
		}
		break;
	case 2://CUADRADO RELLENO
		cout << "Ingrese la dimensiocn del Cuadrado Relleno\n";
		cin >> n;
		cout << "\n";
		for(i=0;i<n;i++){//Algoritmo
			for(j=0;j<n;j++){
				cout << "* ";
			}
			cout << "\n";
		}
		break;
	default:
		cout << "\tOPCION INCORRECTA";
		break;
	}
}while(tipo>2);
}

    void rectangulo(){
    int i,j,b,h,tipo;
    do{
        cout << "\t\tRectangulo\n";
        cout << "\t1)Contorno";
        cout << "\t2)Relleno";
        //Ingrese la opcion
        tipo=getche();
        tipo=tipo-48;
        system("cls");
        switch(tipo){
            case 1://CONTORNO RECTANGULO
            cout << "\t\tRectangulo\n";
            cout << "Ingrese la base del Rectangulo\n";
            cin >> b;
            cout << "Ingrese la altura del Rectangulo\n";
            cin >> h;
            cout << "\n";
            for(i=0;i<h;i++){//Algoritmo
                for(j=0;j<b;j++){
                    if(j==0 || j==b-1 || i==0 || i==h-1){
                        cout << "* ";
                    }else{
                        cout << "  ";
                    }

                }
                cout << "\n";
            }
		break;
                case 2:
            cout << "\t\tRectangulo\n";
            cout << "Ingrese la base del cuadrado\n";
            cin >> b;
            cout << "Ingrese la altura del cuadrado\n";
            cin >> h;
            cout << "\n";
            for(i=0;i<h;i++){//Algoritmo
                for(j=0;j<b;j++){
                    cout << "* ";
                }
                cout << "\n";
            }
            break;
        default:
		cout << "\tOPCION INCORRECTA";
		break;
        }
    }while(tipo>2);
}

void triangulo(){
int i,j,n,tipo;
do{
cout << "\t\tTriangulos Rectangulos\n";
cout << "\t1)Superior-Izquierdo";
cout << "\t2)Inferior-Izquierdo";
cout << "\t3)Superior-Derecho";
cout << "\t4)Inferior-Derecho";
//Ingrese la opcion
tipo=getche();
tipo=tipo-48;
system("cls");
switch(tipo){
	case 1://Superior-Izquierdo
		cout << "\tIngrese la dimension del Triangulo Rectangulo Superior-Izquierdo\n";
		cin >> n;
		cout << "\n";
		for(i=0;i<n;i++){//Algoritmo
			for(j=0;j<n;j++){
				if(j<=n-i-1){
				cout << "* ";
				}else{
					cout << "  ";
				}
			}
			cout << "\n";
		}
		break;
	case 2://Inferior-Izquierdo
		cout << "\tIngrese la dimension del Triangulo Rectangulo Inferior-Izquierdo\n";
		cin >> n;
		cout << "\n";
		for(i=0;i<n;i++){//Algoritmo
			for(j=0;j<n;j++){
				if(j<=i){
				cout << "* ";
				}else{
					cout << "  ";
				}
			}
			cout << "\n";
		}
		break;
	case 3://Superior-Derecho
		cout << "\tIngrese la dimension del Triangulo Rectangulo Superior-Derecho\n";
		cin >> n;
		cout << "\n";
		for(i=0;i<n;i++){//Algoritmo
			for(j=0;j<n;j++){
				if(j>=i){
				cout << "* ";
				}else{
					cout << "  ";
				}
			}
			cout << "\n";
		}
		break;
	case 4://Inferior-Derecho
		cout << "\tIngrese la dimension del Triangulo Rectangulo Inferior-Derecho\n";
		cin >> n;
		cout << "\n";
		for(i=0;i<n;i++){//Algoritmo
			for(j=0;j<n;j++){
				if(j>=n-i-1){
				cout << "* ";
				}else{
					cout << "  ";
				}
			}
			cout << "\n";
		}
		break;
	default:
		puts("\tOPCION INCORRECTA");
		system("cls");
		break;
	}
}while(tipo>4);
}

