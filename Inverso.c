#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float num, inv;
	
	printf ("Teclee un numero entero: ");
	scanf ("&f", &num);
	
	inv= 1/num;
	
	if(num>=1)
	{
		printf ("Su inverso es 1/%f = ", num);
		printf ("%f", inv);
	}
	else
	{
		if (num <=-1)
		{
			printf ("Su inverso es -1/%f = ", num);
			printf ("%f", inv);
		}
		else
		{
			if (num==0)
			{
				printf ("Error, division entre cero");
			}
		}
	}
	return 0;
}
