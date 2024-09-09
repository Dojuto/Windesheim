#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    float A;
    float B;

    printf("Vul hier 2 floats in?\n");
    scanf("%f %f", &A, &B);

    if (A <= B) {
        printf("Grootste waarde is: %f\n", B);
    }
    else {
        printf("Grootste waarde is: %f\n", A);
    }
}