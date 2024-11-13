#include <stdio.h>

void vullen(int* arr1, int* arr2, int* arr3, int lengte) {
	for (int i = 0; i < lengte / 2; i++) {
		arr3[i] = arr1[i];
		}
	for (int i = lengte / 2; i < lengte; i++) {
		arr3[i] = arr2[i - lengte / 2];
	}
}

void printArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void main() {
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 6,7,8,9,10 };
	int c[10];

	vullen(a, b, c, 10);

	printf("Array 1: ");
	printArray(a, 5);

	printf("Array 2: ");
	printArray(b, 5);

	printf("Array 3: ");
	printArray(c, 10);


}