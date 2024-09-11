#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	double x;


	printf("Vul hier een getal in:\n");
	scanf("%lf", &x);

	if (x < 0.0) {
		printf("Sorry, U moet een positief getal invullen.\n");
		return 1;
	}

	printf("De wortel van alle gehele getallen tussen 0 en %lf zijn:\n", x);

	for (int i = 0; i <= (int)x; i++) {
		double wortel = sqrt((double)i);
		printf("Wortel van %d = %lf\n", i, wortel);
	}
}