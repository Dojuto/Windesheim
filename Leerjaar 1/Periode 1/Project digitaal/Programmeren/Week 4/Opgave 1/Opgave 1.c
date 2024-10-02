#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double gemiddelde(a, b, c, d);


void main()
{
	int a = 4;
	int b = 5;
	int c = 6;
	int d = 7;

	
	double gemiddeldetrekker = gemiddelde(a, b, c, d);
	printf("gemiddelde van %d, %d, %d en %d is: %.6f\n", a, b, c, d, gemiddeldetrekker);
	
}
double gemiddelde(int a, int b, int c, int d)
{
	return (a + b + c + d) / 4.0;
}
