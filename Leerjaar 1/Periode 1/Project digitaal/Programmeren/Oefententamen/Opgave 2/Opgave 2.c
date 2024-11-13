#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	// Opgave 2
	
	int N;
	printf("Vul hier een integer N in: \n");
	scanf("%d", &N);

	if (N >= 5.5 && N <= 10)
	{
		printf("Voldoende");
	}
	else if (N < 5.5 &&  N > 0)
	{
		printf("onvoldoende");
	}
	else
	{
		printf("ongeldig");
	}
	
}