#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926536

//Bloque principal
int main()
{
	//Definir variables
	float r, area;

	printf("¿Cuanto mide el radio de la esfera? ");
	scanf("%f",&r);
	
	//Procedimiento
	area= 4/3.0*PI*r*r*r;
	
	printf("El volumen de la esfera es %f",area);
	return 0;
}
