#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int keuze;
    int getal;
    int kwadraat;
    int machtshef;

    printf("Wilt u uw integer in het kwadraat typ 0.\nWilt u uw integer in 3e machtshef typ 1.\n");
    scanf("%d", &keuze);


    printf("Vul hier 1 integer in?\n");
    scanf("%d", &getal);



    if (keuze == 0) {
        kwadraat = getal * getal;
        printf("Uw integer in het kwadraat is: %d\n", kwadraat);
    }
    else if (keuze == 1) {
        machtshef = getal * getal * getal;
        printf("Uw integer in het kwadraat is: %d\n", machtshef);
    }
}