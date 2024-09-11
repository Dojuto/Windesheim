#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	int A;
	int B;

	printf("Vul hier twee getallen in (gescheiden door een spatie):\n");
	scanf("%d %d", &A, &B);

	if (A % 10 == B % 10) {
		printf("De getallen %d en %d hebben hetzelfde laatste cijfer.\n", A, B);
	}
	else {
		printf("De getallen %d en %d hebben niet hetzelfde laatse cijfer.\n", A, B);
	}
}