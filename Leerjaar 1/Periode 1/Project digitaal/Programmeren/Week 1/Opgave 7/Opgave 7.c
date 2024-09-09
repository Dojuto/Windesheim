#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define pi 3.141592653589793

void main() 
{
    float radius, omtrek, oppervlakte;

    
    printf("Voer de straal van de cirkel in: ");

    scanf("%f", &radius);

    
    oppervlakte = 2 * pi * radius;
    omtrek = pi * radius * radius;

    
    printf("Omtrek van de cirkel: %.2f\n", omtrek);
    printf("Oppervlakte van de cirkel: %.2f\n", oppervlakte);
}