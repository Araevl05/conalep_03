#include <stdio.h>

int main ()
{
	float litros, precio, descuento, importe, pago;
	
	printf ("Cuantos litros de gasolina compraste? ");
	scanf ("%f", &litros);
	printf ("Cual es el precio del litro? ");
	scanf ("%f", &precio);
	
	importe=precio*litros;
	
	if ((litros>=1) && (litros<=10))
	{
		descuento=0;
		pago=importe-descuento;
		
		printf("\nEl importe es de %f ", importe);
		printf("\nEl descuento es de %f ", descuento);
		printf("\nEl pago total es de %f ", pago);
	}
	else
	{
		if ((litros>=11) && (litros<=15))
		{
			descuento=importe*0.03;
			pago=importe-descuento;
			
			printf("\nEl importe es de %f ", importe);
			printf("\nEl descuento es de %f ", descuento);
			printf("\nEl pago total es de %f ", pago);
		}
		else
		{
			if ((litros>=16) && (litros<=22))
			{
				descuento=importe*0.05;
				pago=importe-descuento;
				
				printf("\nEl importe es de %f ", importe);
				printf("\nEl descuento es de %f ", descuento);
				printf("\nEl pago total es de %f ", pago);
			}
			else
			{
				if ((litros>=23) && (litros<=29))
				{
					descuento= importe*0.07;
					pago=importe-descuento;
					
					printf("\nEl importe es de %f ", importe);
					printf("\nEl descuento es de %f ", descuento);
					printf("\nEl pago total es de %f ", pago);
				}
				else
				{
					if (litros>=30)
					{
						descuento=importe*0.10;
						pago=importe-descuento;
						
						printf("\nEl importe es de %f ", importe);
						printf("\nEl descuento es de %f ", descuento);
						printf("\nEl pago total es de %f ", pago);
					}
					else
					{
						printf("Dato invalido");
					}
				}
			}
		}
	}
	
	return 0;
}
