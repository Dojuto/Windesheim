#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int berekengemiddelde(int* arr, int lengte);

void main()
{
	// Opgave 4
	int a[10] = { 4,22,1,22,3,5,73,120,33,1 };

	
	float gemiddelde = berekengemiddelde(a, 10);
	printf("Het gemiddelde van de array is: %.2f\n", gemiddelde);
}

int berekengemiddelde(int* arr, int lengte)
{
	int som = 0;
	for (int i = 0; i < lengte; i++)
	{
		som += arr[i];
		
	}
	float gemiddelde = (float)som / lengte;
	return gemiddelde;
}