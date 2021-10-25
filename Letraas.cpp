#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	char letra;
	
	cout<<"Teclee una de las siguientes letras (A/B/C/D/I/P/L/H): ";
	letra=getche();
	printf("\n\n");
	
	switch (letra)
	{
		case 'a' : case 'A' :
			{
				cout<<"Arriba";
				break;
			}	
		case 'b' : case 'B' :
		    {
		    	cout<<"Bajo";
		    	break;
			}
		case 'c' : case 'C' :
		    {
		    	cout<<"Centro";
		    	break;
			}
		case 'd' : case 'D' :
		    {
		    	cout<<"Derecha";
		    	break;
			}
		case 'i' : case 'I'	:
		    {
		    	cout<<"Izquierda";
		    	break;
		    }
		case 'p' : case 'P':
		    {
		    	cout<<"Programador";
		    	break;
	 	    }
	 	case 'l' : case 'L' :
	 	    {
			 cout<<"Limpiar";
			 break;	
			}
		case 'h' : case 'H' :
		    {
		    	cout<<"Ayuda";
		    	break;
		    }
		default : 
		    {
			    cout<<"Tecla no reconocida";
		        break;
		    }
	}
	
	return 0;
}
