#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int leeftijd;
	printf("Vul hier uw leeftijd in:");
	scanf("%d", &leeftijd);

	int maanden;
	maanden = leeftijd * 12;

	printf("U bent %d maanden oud.", maanden);
}