/* Este programa saca la CURP*/

#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main ()
{
	char nombre [30], apellidom [15], apellidop [15], sexo, year[4], dia[2], mes[2], EF[2], curp[18];
	
	printf("Teclee su primer nombre: ");
	gets(nombre);
	printf("Teclee su apellido paterno: ");
	fflush(stdin);
	gets(apellidop);
	printf("Teclee su apellido materno: ");
	gets(apellidom);
	printf("Teclee su año de nacimiento (4 digitos): ");
	fflush(stdin);
	gets(year);
	printf("Teclee su mes numerico de nacimiento (2 digitos): ");
	gets(mes);
	printf("Teclee su dia de nacimiento (2 digitos): ");
	fflush(stdin);
	gets(dia);
	printf("Teclee su clave de entidad federativa: ");
	gets(EF);
	printf("Letra del sexo (H/M): ");
	sexo=getche();
	printf("\n\n");
	
	curp[0]=toupper(apellidop[0]);
	curp[1]=toupper(apellidop[1]);
	curp[2]=toupper(apellidom[0]);
	curp[3]=toupper(nombre[0]);
	curp[4]=year[2];
	curp[5]=year[3];
	curp[6]=mes[0];
	curp[7]=mes[1];
	curp[8]=dia[0];
	curp[9]=dia[1];
	curp[10]=toupper(sexo);
	curp[11]=toupper(EF[0]);
	curp[12]=toupper(EF[1]);
	curp[13]=toupper(apellidop[2]);
	curp[14]=toupper(apellidom[1]);
	curp[15]=toupper(nombre[1]);
	curp[16]='0';
	curp[17]='5';
	
	printf("Su CURP es %s ",curp);
	return 0;
}
