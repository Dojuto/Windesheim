
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float A;
	float B;
	float C;

	printf("Vul hier 3 integers in?\n");
	scanf("%f %f %f", &A, &B, &C);

	float gemiddelde;
	gemiddelde = (A + B + C) / 3;
	printf("Dit is je gemiddelde: %.3f", gemiddelde);
}