#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    float A, C;
   
    printf("Wat is de prijs van uw auto EXL BTW? Vul hier in:\n");
    scanf("%f", &A);

    C = A * 1.21;
    printf("De prijs van uw auto INC BTW is: %.4f\n",  C);
}