#include <stdio.h>

int main ()
{
	int num, x;
	
	do{
		printf("Introduce un número entero: ");
		scanf("%d", &num);
	}while(num<=0);
	
	for(x=1;x<=num;x++)
	{
		if(num%x==0)   
		{
			printf("Su divisor es: %d \n",x);
		}
	}
	return 0;
}
