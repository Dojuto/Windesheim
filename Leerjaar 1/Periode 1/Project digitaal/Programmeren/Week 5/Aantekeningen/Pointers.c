#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void printarray(double y[], int lengte);
/*void doeietsleuks(int* a, int* b);*/

void main()
{
	double y[4] = { 10, 11, 12, 13 };
	printarray(y, 4);
	int schaakbord[8][8];
	int kubus[3][3][3];
}

void printarray(double y[], int lengte)
{
	for (int i = 0; i < lengte; i++)
	{
		printf("Element %.2f:\n", y[i]);
	}
}

void initialiseerbord(char* [][8], int rij)
{


}

