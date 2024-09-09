#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    float A;
    float B;
    float C;

    printf("Vul hier 3 floats in?\n");
    scanf("%f %f %f", &A, &B, &C);

    if (A >= B && A >= C) {
        printf("Grootste waarde is: %f\n", A);
    }
    else if (B >= A && B >= C) {
        printf("Grootste waarde is: %f\n", B);
    }
    else {
        printf("Grootste waarde is: %f\n", C);
    }
}