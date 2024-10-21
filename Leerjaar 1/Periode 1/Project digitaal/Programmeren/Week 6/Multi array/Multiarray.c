#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>



void main()
{
	// twee arrays
	int numbers[2][3] = {
						{1,2,3},
						{4,5,6}
	};


	int rij = sizeof(numbers) / sizeof(numbers[0]);
	int kolom = sizeof(numbers[0]) / sizeof(numbers[0][0]);
	printf("%d", rij);
	printf("\n");
	printf("%d", kolom);
	printf("\n");
	printf("%d", numbers[1][2]);
	printf("\n");
	

	for (int i = 0; i < rij; i++)
	{
		for (int j = 0; j < kolom; j++)
		{
			printf("%d ", numbers[i][j]);
		}
		printf("\n");
	}


	
}

