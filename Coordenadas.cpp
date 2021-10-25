#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float x,y;
	
	printf ("Teclee el valor para x: ");
	scanf ("%f", &x);
	printf ("Teclee el valor para y: ");
	scanf ("%f", &y);
	
	if (x>=1 && y>=1)
	{
		printf ("Sus coordenadas quedan en el I cuadrante"); 
	}
	else
	{
		if(x<=-1 && y>=1)
		{
			printf ("Sus coordenadas quedan en el II cuadrante"); 
		}
		else
		{
			if (x<=-1 && y<=-1)
			{
				printf ("Sus coordenadas quedan en el III cuadrante"); 
			}
			else
			{
				if (x>=1 && y<=-1)
				{
					printf ("Sus coordenadas quedan en el IV cuadrante"); 
				}
				else
				{
					if (x==0 && y==0)
					{
						printf ("Sus coordenadas quedan en el origen del plano cartesiano");
					}
					else
					{
						printf ("Coordenadas inavalidas");
					}
				}
			}
		}
	}
	return 0;
}
