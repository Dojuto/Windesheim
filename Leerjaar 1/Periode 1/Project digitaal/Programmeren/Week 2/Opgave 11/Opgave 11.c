#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	int x;


	printf("Vul hier een getal in:\n");
	scanf("%d", &x);

	if (x < 0.0) {
		printf("Sorry, U moet een positief getal invullen.\n");
		return 1;
	}

	printf("De wortel van alle gehele getallen tussen 0 en %d zijn:\n", x);

	for (int i = 0; i <= (int)x; i++) {
		int wortel = sqrt((int)i);
		printf("Wortel van %d = %d\n", i, wortel);
	}
}