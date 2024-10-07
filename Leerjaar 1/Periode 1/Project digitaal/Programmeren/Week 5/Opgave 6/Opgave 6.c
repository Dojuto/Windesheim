#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <math.h>



void sorteer(int a[], int size);
void printarray(int a[], int size);

void main()
{

	int a[] = { 9,2,3,4,5,6,3,10,1,8,9,7,8 };
	int size = sizeof(a) / sizeof(a[0]);

	sorteer(a, size);
	printarray(a, size);
	

}

void printarray(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}
void sorteer(int a[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

}







