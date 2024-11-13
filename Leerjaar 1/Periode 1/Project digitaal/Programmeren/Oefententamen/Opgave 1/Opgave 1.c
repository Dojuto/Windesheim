#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	// Opgave 1
	int N;
	printf("Vul hier een integer N in: \n");
	scanf("%d", &N);

	for (int i = N; i >= 0; i--)
	{
		printf("%d, ", i);
	}
}