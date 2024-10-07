#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// Roep mijn functie aan
void aantalkeer(int n);




void main()
{
	int l = 0;
	aantalkeer(l);
		
	
}

//functie
void aantalkeer(int n)
{
	n++;
	printf("Hoevaak is de functie uitgeroepen: %d\n", aantalkeer);
}
