#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int berekengemiddelde(int* arr, int lengte);
//void printEvenSom(int n);

void main()
{
	// Opgave 1
	/*int N;
	printf("Vul hier een integer N in: \n");
	scanf("%d", &N);

	for (int i = N; i >= 0; i--)
	{
		printf("%d, ", i);
	}*/
	
	// Opgave 2
	/*
	int N;
	printf("Vul hier een integer N in: \n");
	scanf("%d", &N);

	if (N >= 5.5 && N <= 10)
	{
		printf("VOldoende");
	}
	else if (N < 5.5 &&  N > 0)
	{
		printf("onVOldoende");
	}
	else
	{
		printf("ongeldig");
	}
	*/
	

	// Opgave 3
	/*int n;
	printf("Vul hier een integer N in: \n");
	scanf("%d", &n);


	printEvenSom(n);
	*/

	//Opgave 4
	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };

	berekengemiddelde(a, 10)

	//opgave 5



}


int berekengemiddelde(int* arr, int lengte)
{
	int som = 0;
	for (int i = 0; i < lengte; i++)
	{
		som += a[i];
		gemiddelde = som / lengte;
	}
	return gemiddelde;
}
/*void printEvenSom(int n)
{
	int sum = 0;

	// Loop door alle getallen van 0 tot n
	for (int i = 0; i <= n; i++) {
		// Controleer of het getal even is
		if (i % 2 == 0) {
			sum += i;  // Voeg het even getal toe aan de som
		}
	}

	// Print de som van even getallen
	printf("De som van even getallen van 0 tot %d is: %d\n", n, sum);

}*/