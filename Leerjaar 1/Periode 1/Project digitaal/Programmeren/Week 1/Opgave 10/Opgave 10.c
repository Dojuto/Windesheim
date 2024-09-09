#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    // i = u/r
    double weerstandswaarde, spanning, stroomsterkte;

    printf("Om de stroomsterkte te berekenen heb ik een weerstandswaarde nodig en een spanning.\nVul deze hier in:\n");
    scanf_s("%lf %lf", &weerstandswaarde, &spanning);

    stroomsterkte = spanning / weerstandswaarde;

    printf("Uw stroomsterkte is: %lf\n", stroomsterkte);
}