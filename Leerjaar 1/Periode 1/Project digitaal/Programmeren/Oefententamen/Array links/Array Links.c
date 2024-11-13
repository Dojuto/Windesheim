#include <stdio.h>

void  retate(int* array, int length, int go_left);

void main()
{
	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };

	printf("Voor: \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	retate(a, 10, 5);

	printf("\nNa: \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
}


void  retate(int* array, int length, int go_left)
{
    for (int i = 0; i < go_left; i++) {
        int temp = array[0];
        for (int j = 0; j < length - 1; j++) {
            array[j] = array[j + 1];
        }
        array[length - 1] = temp;
    }
}

/*void  retate(int* array, int length, int go_right)
{
    for (int i = 0; i < go_right; i++) {
        int temp = array[length - 1];  // Stap 1: Sla het laatste element op
        for (int j = length - 1; j > 0; j--) {
            array[j] = array[j - 1];  // Stap 2: Verschuif de elementen naar rechts
        }
        array[0] = temp;
}
*/