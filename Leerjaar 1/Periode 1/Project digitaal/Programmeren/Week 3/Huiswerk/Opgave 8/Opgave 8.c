#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main() {
	double start_spaarrekening = 1000.0;
	double rente = (2.0 / 100) + 1;
	int jaren = 15;
	double spaarrekening = start_spaarrekening;

	

	printf("Jaren\tgeld\n");
	printf("====================\n");

	for (int jaar = 1; jaar <= jaren; jaar++) {
		spaarrekening = spaarrekening * rente;
		printf("%d\t%.2f\n", jaar, spaarrekening);
	}
	return 0;
}