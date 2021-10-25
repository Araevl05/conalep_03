#include <iostream>
int num, centdm, decdm, unidm, cent, dec, uni, res;
using namespace std;

int main()
{
	cout << "teclee un numero entero (0 al 999999) ";
	cin >> num;
	
	if ( (num >= 0) && (num <= 999999) )
	{
		cout << "No sobrepasa el rango" << endl << endl;
		cout << "El numero  " << num << "  tiene lo siguiente: " << endl << endl;
		
		centdem = num / 100000;
		res = num % 100000;
		num = res;
		
		decdm = num / 10000;
		res = num % 10000;
		num = res;
		
		unidm = num / 1000;
		res = num % 1000;
		num = res;
		
		cent = num / 100;
		res = num % 100;
		num = res;
		
		dec = num / 10;
		res = num % 10;
		num = res;
		
		uni = num / 1;
		
		cout << centdm << "  Centenas de millar  "  << endl;
		cout << decdm  << "  Decenas de millar   "  << endl; 
		cout << unidm << "  Unidades de millar   "  << endl;
		cout << cent << "  Centenas  "  << endl;
		cout << dec  << "  Decenas   "  << endl; 
		cout << uni << "  Unidades   "  << endl; 
	}
	else
	{
		cout << "Error, el numero dado esta fuera del rango";
	}
	return 0;
}
