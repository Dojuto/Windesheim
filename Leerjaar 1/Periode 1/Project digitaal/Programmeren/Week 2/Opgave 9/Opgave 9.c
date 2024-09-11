#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	float daltarief = 0.40;
	float piektarief = 0.46;
	float leveringstarief = 80;
	float dalverbruik;
	float piekverbruik;

	printf("Wat is uw dalverbruik in kwh:\n");
	scanf("%f", &dalverbruik);

	printf("Wat is uw piekverbruik kwh:\n");
	scanf("%f", &piekverbruik);

	float totalekosten = (dalverbruik * daltarief) + (piekverbruik * piektarief) + leveringstarief;
	
	

	printf("De totale elektriciteitskosten voor een jaar zijn: %.2f\n", totalekosten);
}