#include <stdio.h>

int main ()
{
	float peso, altura;
	int edad;
	
	printf("Ingresa tu edad: ");
	scanf ("%d", &edad);
	printf("Ingresa tu altura en centimetros: ");
	scanf ("%f", &altura);
	
	edad*= 0.10;
	peso= (altura-100+edad)*0.9;
	
	printf ("Tu peso recomendado es: %f", peso);
	
	return 0;
}
