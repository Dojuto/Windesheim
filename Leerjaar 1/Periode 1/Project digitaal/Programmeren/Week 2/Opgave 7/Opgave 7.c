#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int A, B;
	printf("Vul hier twee integers in:\n");
	scanf("%d%d", &A, &B);
	if (A % B == 0) {
		printf("Waar");
	}
	else {
		printf("Niet waar");
	}
}