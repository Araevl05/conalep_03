#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char nombre [15];
	int dia, mes, anio;
	
	printf ("Como te llamas? ");
	scanf ("%c", nombre);
	printf ("Dame tu dia de nacimiento: ");
	scanf ("%i", dia);
	printf ("En que numero de mes naciste (1 al 12): ");
	scanf ("%i", mes);
	printf ("De que anio eres: ");
	scanf ("%i", anio);
	
	if (mes == 1)
	{
		printf ("enero");
	}
	else
	{
		if (mes == 2)
		{
			printf ("febrero");
		}
		else
		{
			if(mes==3)
			{
				printf ("marzo");
			}
			else
			{
				if(mes==4)
				{
					printf("abril");
				}
				else
				{
					if(mes==5)
					{
						printf("mayo");
					}
					else
					{
						if(mes==6)
						{
							printf("junio");
						}
						else
						{
							if(mes==7)
							{
								printf("julio");
							}
							else
							{
								if(mes==8)
								{
									printf("agosto");
								}
								else
								{
									if(mes==9)
									{
										printf("septiembre");
									}
									else
									{
										if(mes==10)
										{
											printf("octubre");
										}
										else
										{
											if(mes==11)
											{
												printf("noviembre");
											}
											else
											{
												if(mes==12)
												{
													printf("diciembre");
												}
												else
												{
													printf ("Dato invalido");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	printf ("Hola %c", nombre);
	printf ("Veo que naciste el dia %i de %i de %i", dia, mes, anio);
	
	return 0;
}
