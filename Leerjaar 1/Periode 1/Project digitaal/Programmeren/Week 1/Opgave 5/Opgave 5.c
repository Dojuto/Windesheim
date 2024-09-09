#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int A;
    int B;

    printf("Vul hier 2 floats in?\n");
    scanf("%d %d", &A, &B);

    if (A == B) {
        printf("gelijk\n");
    }
    else {
        printf("Niet gelijk\n");
    }
}