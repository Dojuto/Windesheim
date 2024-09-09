#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() 
{
    float A;
    double B;

    printf("Vul hier je snelst gereden snelheid in km/h:\n");
    scanf("%f", &A);

    B = A * 3.6;
    printf("Uw snelst gereden snelheid in m/s is: %.0f meter per seconde\n", B);
}