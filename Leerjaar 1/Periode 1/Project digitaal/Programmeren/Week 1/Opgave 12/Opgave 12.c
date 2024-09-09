#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int seconden;
    int uren, minuten, rest;

    
    printf("Voer een aantal seconden in: ");
    scanf("%d", &seconden);

   
    uren = seconden / 3600;
    minuten = (seconden % 3600) / 60;
    rest = seconden % 60;

    
    printf("Uren: %d\n", uren);
    printf("Minuten: %d\n", minuten);
    printf("Seconden: %d\n", rest);
}