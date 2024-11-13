#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float a, b, c;

	printf("Geef double a op >>> ");
	scanf("%f", &a);

	printf("Geef double b op >>> ");
	scanf("%f", &b);

	printf("Geef double c op >>> ");
	scanf("%f", &c);

	printf("%.2f + %.2f * %.2f = %.2f", a, b, c, (a + b) * c);
}