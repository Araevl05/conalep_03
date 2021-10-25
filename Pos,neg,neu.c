#include <stdio.h>

int main ()
{
	int numero;
	
	printf ("Ingrese un numero entero: ");
	scanf ("%i", &numero);
	
	if(numero>=1)
	{
		printf ("El numero %i es positivo", numero);
	}
	else
	{
		if (numero<=-1)
		{
			printf ("El numero %i es negativo", numero);
		}
		else
		{
			if (numero == 0)
			{
				printf ("El numero %i es neutro", numero);
			}
			else
			{
				printf ("Dato incorrecto");
			}
		}
	}
	return 0;
}
