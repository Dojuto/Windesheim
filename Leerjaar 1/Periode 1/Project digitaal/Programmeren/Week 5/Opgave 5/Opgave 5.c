#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <math.h>



int maximum(int a[], int lengte);

void main()
{

	int a[] = {1,2,3,4,5,6,3,10,1,8,9,7,8};
	int maximale = maximum(a, 13);

	printf("Het grootste getal in de array is: %d\n", maximale);

}

int maximum(int a[], int lengte)
{
	int max = a[0];

	for (int i = 1; i < lengte; i++)
	{
		if (a[i] > max) max = a[i];
	}
	return max;
}







