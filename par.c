#include <stdio.h>

int main ()
{
	int num;
	
	printf ("Dame un numero entero: ");
	scanf ("%d", &num);
	
	if(num%2==0)
	{
		printf("El numero %d es par", num);
	}
	else
	{
		printf("El numero %d es impar", num);
	}
	
	return 0;
}
