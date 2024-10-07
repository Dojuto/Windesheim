#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void optellen(int* a[],int* b[], int* c[], int lengte);

void main()
{
	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };
	int b[10] = { 6,47,7,25,88,51,4,55,75,12 };
	int c[10] = { 11,32,49,67,8,96,57,94,7,3 };
	int d[10] = { 22,90,3,26,58,34,34,2,19,14 };
	int e[10] = { 0 };

	optellen(a, b, c, 10);

	printf("Resultaat van het optellen van arrays a en b:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", c[i]);
	}
	printf("\n");
}

void optellen(int* a[], int* b[], int* c[], int lengte)
{
	for (int i = 0; i < length; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}
	
}