#include <stdio.h>

int main ()
{
	int num, x, contador=0;
	
	do{
		printf("Introduce un numero entero: ");
		scanf("%d", &num);
	}while(num<=0);
	
	for(x=1; x<=num; x++)
	{
		if(num%x==0)   
		{
			printf("Su divisor es: %d \n",x);
			contador ++; 
			// incrementas el contador cada vez que haya un divisor
		}
	}
	printf("\n El número %d tiene un total de: %d divisores. \n",num ,contador);
	return 0;
}
