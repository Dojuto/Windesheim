#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printEvenSom(int n);

void main()
{
	// Opgave 3
	int n;
	printf("Vul hier een integer N in: \n");
	scanf("%d", &n);


	printEvenSom(n);
	

}
void printEvenSom(int n)
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

}