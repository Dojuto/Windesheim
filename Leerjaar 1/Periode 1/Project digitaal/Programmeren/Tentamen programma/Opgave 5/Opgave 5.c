#include <stdio.h>

void draaiom(int* arr, int length);

void main() {
    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

    for (int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    draaiom(arr, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }
}

void draaiom(int* arr, int length) {
    int temp;
    int begin = 0;
    int eind = length - 1;

    while (begin < eind)
    {
        temp = arr[begin];
        arr[begin] = arr[eind];
        arr[eind] = temp;

        begin++;
        eind--;
    }
}