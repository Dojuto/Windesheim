#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

int IsSchrikkel(int y);


void main()
{
	for (int i = 0; i < 2023; i++)
		printf("%d: %d\n", i, IsSchrikkel(i)); // print alle jaren tot 2023

	
	

}

int IsSchrikkel(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		return 1; // is schrikkeljaar
	}
	else
	{
		return 0; // is geen schrikkeljaar
	}
}







