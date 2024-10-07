#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <math.h>



int komtvoor(int a[], int lengte, int getal);

void main()
{

	int a[] = { 1,2,3,4,5,6,3,4,1,8,9,7,8 };
	int komtvoor1 = komtvoor(a, 13, 5);

	printf("Het getal 5 komt %d x voor in de array\n", komtvoor1);

}

int komtvoor(int a[], int lengte, int getal)
{
	int count = 0;

	for (int i = 0; i < lengte; i++)
	{
		if (a[i] == getal) count++;
	}
	return count;
}







