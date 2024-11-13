#include <stdio.h>

void rotate(int* array, int length, int go_right);

void main()
{
    int a[10] = { 4, 22, 1, 22, 3, 5, 73, 12, 33, 1 };

    printf("Voor: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    rotate(a, 10, 5);  // Roteren naar rechts 4 keer

    printf("\nNa: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
}

void rotate(int* array, int length, int go_right)
{
    for (int i = 0; i < go_right; i++) {
        int temp = array[length - 1];  // Stap 1: Sla het laatste element op
        for (int j = length - 1; j > 0; j--) {
            array[j] = array[j - 1];  // Stap 2: Verschuif de elementen naar rechts
        }
        array[0] = temp;  // Stap 3: Zet het opgeslagen element aan het begin
    }
}