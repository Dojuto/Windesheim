#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main()
{
	int x = 4;
	int* pX = &x;
	int y = *pX;
	printf("%d", y);
}
