#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int isKlinker = 0;
	char letter;
	char klinkers[5] = { 'a','e','i','o','u'};
	printf("Vul hier een letter in:");
	scanf("%c", &letter);

    for (int i = 0; i < sizeof(klinkers) / sizeof(klinkers[0]); i++) {
        if (letter == klinkers[i]) {
            isKlinker = 1;
            break;
        }
    }
    if (isKlinker) {
        printf("%c is een klinker.\n", letter);
    }
    else  {
        printf("%c is een medeklinker.\n", letter);
    }
}