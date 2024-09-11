
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int positief1;
	int positief2;
	int antwoord;
	int overflow;

	printf("Vul hier een integer in:\n");
	scanf("%d", &positief1);

	printf("Vul hier een tweede integer in:\n");
	scanf("%d", &positief2);

	antwoord = positief1 * positief2;
	overflow = 21478364;

	if (antwoord < overflow) {
		printf("dit zijn de twee integers keer elkaar: %d\n", antwoord);
	}
	else if (antwoord > overflow) {
		printf("overflow");
	}

	



}
