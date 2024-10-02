
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double wortel(double getal);
int overalbekend = 0;
int recursie();

void main()
{
	
	/*int getal = 76;
	double worteltrekker = wortel(getal);
	printf("Wortel van %d is: %.2f\n", getal, worteltrekker);
	printf("t %d\n", overalbekend);
	
	static int maandag = 100;
	printf("%d", maandag);*/
	recursie();
}

int recursie()
{
	overalbekend++;
	printf("Groter en groter: %d\n", overalbekend);
	recursie();
}
double wortel(double getal)
{
	return sqrt(getal);
}
