#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float peso, altura, edad;
	
	printf("Ingresa tu edad: ");
	scanf ("%f", &edad);
	printf("Ingresa tu altura en centimetros: ");
	scanf ("%f", &altura);
	
	peso= (altura-100+((10*edad)/100))*0.9;
	
	printf ("Tu peso recomendado es: %f", peso);
}
