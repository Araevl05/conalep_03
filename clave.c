#include <stdio.h>
#include <stdlib.h>

main ()
{
	int pass;
	
	printf ("Ingrese su contraseña por favor: ");
	scanf ("%i", &pass);
	
	if (pass==0346)
	{
		printf ("Bienvenido, su clave es correcta");
	}
	else
	{
		printf ("Lo lamento, su clave es incorrecta");
	} 
	return 0;
}
