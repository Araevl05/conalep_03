#include <stdio.h>
#include <stdlib.h>

//Bloque principal
int main()
{
	//Definir variables
	float b, h, area;

	printf("¿Cuanto mide la base del triangulo? ");
	scanf("%f",&b);
	printf("¿Cual es la altura del triangulo? ");
	scanf("%f",&h);
	
	//Procedimiento
	area= (b*h)/2;
	
	printf("El area del triangulo es %f",area);
	return 0;
}
