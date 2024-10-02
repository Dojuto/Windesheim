#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* x, int* y);


void main()
{
	int a, b;

	printf("Geef een waarde voor a en b\n");
	scanf("%d%d", &a, &b);

	swap(&a, &b);

	printf("a = %d en b = %d\n", a, b);

}

void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
