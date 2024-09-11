#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    char karakter;
    printf("Voer een karakter in: ");
    scanf("%c", &karakter);

    printf("De ASCII-waarde van '%c' is: %d\n", karakter, (int)karakter);
}