#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CoutDown(int start) {
	for (int i = start; i >= 0; i--)
	{
		printf("%d", i);
		printf("\n");
	}
}
void main()
{
	// Opgave 1
	int start;
	printf("Vul hier een integer N in: \n");
	scanf("%d", &start);

	CoutDown(start);
}

