#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <math.h>


//int occurrences(int array[],int lenght, int find);
int count(int a[], int lengte);

void main()
{
	/*int array[] = {4,5,6,7,8,9,3,5,1,5};
	int array2[] = { 4,4,8,7,8,10,3,3,1,5 };
	int findarr_5 = occurrences(array, 10, 5);
	int findarr2_0 = occurrences(array2, 10, 0);

	printf("Number of 5s found in array 0: %d\n", findarr_5);
	printf("Number of 0s found in array 1: %d\n", findarr2_0);
	*/
	int a[] = { 1,2,3,4,5,6,3,4,1,8,9,7,8 };

	int uniek = count(a, 13);
	printf("totale unieke cijfers in array zijn: %d\n", uniek);

}

int count(int a[], int lengte)
{
	int count = 0;
	
	for (int i = 0; i < lengte; i++)
	{
		bool match_found = false;

		for (int j = 0; j < lengte; j++)
		{
			if (a[i] == a[j] && i != j)
				match_found = true;
		}
		if (!match_found) count++;
	}
	
	return count;
}

/*int occurrences(int array[], int lenght, int find)
{
	int count = 0;

	for (int i = 0; i < lenght; i++)
		if (array[i] == find) count++;
	return count;
}
*/





