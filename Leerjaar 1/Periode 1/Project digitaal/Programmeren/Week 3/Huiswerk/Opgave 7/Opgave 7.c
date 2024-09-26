#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main() {
	float A, B, C, D, E, F;
	int onvoldoende = 5.4;
	int voldoende = 5.5;

	

	printf("Vul hier 6 integers in: \n");
	scanf("%f %f %f %f %f %f", &A, &B, &C, &D, &E, &F);

	float gemiddelde = (A + B + C + D + E + F) / 6.0;
	

	if (gemiddelde <= onvoldoende) {
		printf("Het gemiddelde is: %.2f\nje hebt een onvoldoende.\n", gemiddelde);
	}
	else {
		printf("Het gemiddelde is: %.2f\nje hebt een voldoende.\n", gemiddelde);
	}
}