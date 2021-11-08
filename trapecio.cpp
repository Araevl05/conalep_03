#include <stdio.h>
#include <stdlib.h>

//Bloque principal
int main()
{
	//Definir variables
	float b1, b2, h, area;

	printf("¿Cuanto mide la base 1 del trapecio? ");
	scanf("%f",&b1);
	printf("¿Cuanto mide la base 2 del trapecio? ");
	scanf("%f",&b2);
	printf("¿Cual es la altura del trapecio? ");
	scanf("%f",&h);
	
	//Procedimiento
	area= ((b1+b2)*h)/2;
	
	printf("El area del trapecio es %f",area);
	return 0;
}
