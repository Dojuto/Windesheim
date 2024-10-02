#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int aantalkeer(n);
int n = 2;


void main()
{
	aantalkeer();

}
int aantalkeer()
{
	n++;
	printf("Hoevaak is de functie uitgeroepen: %d\n", aantalkeer);
	aantalkeer();
}
