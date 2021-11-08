#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int seg, min, horas, res;
	
	printf("Cuantos segundos son? ");
	scanf("%i," &seg);
	
	
	min= seg/60;
	res= min % 60;
	min= res;
	
	horas= min/60;
	res= horas % 60;
	horas= res;
	
	printf("Equivale a %i hora %i minutos y %i segundos", horas, min, seg);
}
