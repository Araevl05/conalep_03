#include <stdio.h>

int main ()
{
	int hora, min;
	
	printf("Teclee la hora: ");
	scanf("%d", &hora);
	printf("Teclee los minutos: ");
	scanf("%d", &min);
	
	if((hora>=6 && hora<=11)&&(min>=0 && min<=59))
	{
		printf("Buenos dias!!");
	}
	else
	{
		if((hora>=12 && hora<=18)&&(min>=0 && min<=59))
		{
			printf("Buenas tardes!!");
		}
		else
		{
			if((hora<=5 && hora<=24) && (hora>=1 && hora>=19) && (min>=0 && min<=59))
			{
				printf("Buenas noches!!");
			}
			else
			{
				printf("Datos invalidos");
			}
		}
	}
	
	return 0;
}
