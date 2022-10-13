#include<iostream>
#include<string.h>
#define maxPatron 400
#define maxTexto 400

using namespace std;

void fuerzabruta(char[], char[], int, int);

int main(void)
{
	char Patron[maxPatron];
	char Texto[maxTexto];
	int x, y;
	cout << "Ingresa el texto:";
	cin>>(Texto);
	x = strlen(Texto);
	
	do {
		cout << "\nIngresa el patron:";
		cin >> Patron;
		y = strlen(Patron);
		
	} while (y > x); 
	
	fuerzabruta(Texto, Patron, x, y);   
}

void fuerzabruta(char texto[], char patron[], int x, int y)
{
	int i, j, k, cont = 0;
	char temp[100];
	for (i = 0; i <= x; i++)
	{
		for (j = i, k = 0; j < y; j++, k++)
			temp[k] = texto[i + k];
		temp[k] = '\0';
		if (strcmp(patron, temp) == 0)
		{
			cout << "\nLa posicion es : " << i << "\n";
			cont++;
		}
		y++;
	}
	cout << "\n\nLas iteraciones que se hicieron fueron :" << cont << endl;
	
}
