#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    
    char letter1;
    char letter2;
    char letter3;
    char alleletters[26] = { 'a','b','c','d','e','f','g','h','i','j' ,'k','l','m','n','o' ,'p','q','r','s','t', 'u','v','w','x','y','z'};
    printf("Vul hier een letter in:");
    scanf("%c", &letter1);

    printf("Vul hier een letter in:");
    scanf("%c", &letter2);

    printf("Vul hier een letter in:");
    scanf("%c", &letter3);

    printf("%c positie is %c", letter1, alleletters[]);
    }