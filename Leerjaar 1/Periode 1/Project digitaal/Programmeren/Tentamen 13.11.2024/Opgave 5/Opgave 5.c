#include <stdio.h>

void sorteer(int* arr, int lengte)
{
	int finished = 0;
	while (!finished) {
		int success = 1;
		for (int i = 0; i < lengte - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				success = 0;
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}

		if (success) { finished = 1; }
	}
}

void printArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void main() {
	int a[10] = { 12,44,300,55,111,88,66,9,75,101 };


	printf("A: ");
	printArray(a, 10);

	sorteer(a, 10);

	printf("A gesorteerd: ");
	printArray(a, 10);
}