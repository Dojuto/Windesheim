#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	int N;
	printf("Vul hier een positief getal in:\n");
	scanf("%d", &N);

    if (N > 0) {
        
        for (int i = 1; i <= N; i++) {
            
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
            printf("\n");  
        }
    }
    else {
        printf("Het ingevoerde getal is niet positief. Probeer het opnieuw met een positief getal.\n");
    }
}