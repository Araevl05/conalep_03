#include <stdio.h>
#include <stdlib.h>

main ()
{
	/*Declaración de variables*/
	float prom, calif1, calif2, calif3;
	
	/*leer datos*/
	printf ("Ingrese sus 3 calificaciones \n");
	scanf ("%f", &calif1);
	scanf ("%f", &calif2);
	scanf ("%f", &calif3);
	
	//Procedimiento
	prom = (calif1+calif2+calif3)/3;
	
	if (prom>=7)
	{
		printf ("Felicidades, aprobaste el modulo con %f ", prom );
		printf ("de calificacion");
	}
	else
	{
		printf ("Lo lamento, desaprobaste el modulo con %f ", prom );
		printf ("de calificacion");
	} 
	return 0;
} 
