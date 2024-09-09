#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int A;
    int kwadraat;
    

    printf("Vul hier 1 integer in?\n");
    scanf("%d", &A);

    kwadraat = A * A;
  
    printf("Uw integer in het kwadraat is: %d\n", kwadraat);
}