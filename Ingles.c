#include <stdio.h>
#include <stdlib.h>

main ()
{
	int numero;
	
	printf ("Ingrese un numero del 1 al 5: ");
	scanf ("%i", &numero);
	
	if (numero==1)
	{
		printf ("One/Uno");
	}
	else
	{
		if (numero==2)
		{
			printf ("Two/Dos");
		}
		else
		{
			if (numero==3)
			{
				printf ("Three/Tres");
			}
			else
			{
				if (numero==4)
				{
					printf ("Four/Cuatro");
				}
				else
				{
					if (numero==5)
					{
						printf ("Five/Cinco");
					}
					else
					{
						printf("Su numero es invalido");
					}
				}
			}
		}
	} 
	return 0;
}
