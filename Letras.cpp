#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	char A, a, B, b, C, c, D, d, I, i, P, p, L, l, H, h, letra, imp[15];
	
	std::cout << "Teclee una de las siguientes letras (A/B/C/D/I/P/L/H): ";
	cin >> letra;
	
	
	if ((letra == 'A')||(letra == 'a')){strcpy(imp, "Arriba");}
	else
	if ((letra == 'B')||(letra == 'b')){strcpy(imp, "Bajo");}
	else
	if ((letra == 'C')||(letra == 'c')){strcpy(imp, "Centro");}
	else
	if ((letra == 'D')||(letra == 'd')){strcpy(imp, "Derecha");}
	else
	if ((letra == 'I')||(letra == 'i')){strcpy(imp, "Izquierda");}
	else
	if ((letra == 'P')||(letra == 'p')){strcpy(imp, "Programador");}
	else
	if ((letra == 'L')||(letra == 'l')){strcpy(imp, "Limpiar");}
	else
	if ((letra == 'H')||(letra == 'h')){strcpy(imp, "Ayuda");}
	else
	std::cout<< "Letra incorrecta";
		
	return 0;
}
