#include <stdio.h>
#include <stdlib.h>

main ()
{
	int pass;
	
	printf ("Ingrese su contrase�a por favor: \n");
	scanf ("%i", &pass);
	
	if (pass==03467)
	{
		printf ("Bienvenido, su clave es correcta" );
	}
	else
	{
		printf ("Lo lamento, su clave es incorrecta");
	} 
	return 0;
}
