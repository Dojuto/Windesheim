#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int cijfer;

    printf("Maak een keuze:\n");
    printf("1. Cijfer 1\n");
    printf("2. Cijfer 2\n");
    printf("3. Cijfer 3\n");
    printf("4. Cijfer 4\n");
    printf("5. Cijfer 5\n");
    printf("6. Cijfer 6\n");
    printf("7. Cijfer 7\n");
    printf("8. Cijfer 8\n");
    printf("9. Cijfer 9\n");
    printf("10. Cijfer 10\n");
    printf("11. Afsluiten\n");
    printf("Voer uw keuze in (1-11): ");
    scanf("%d", &cijfer);

    switch (cijfer) {
    case 1:
        printf("U heeft een zwaar onvoldoende.\n");
        break;
    case 2:
        printf("U heeft een onvoldoende.\n");
        break;
    case 3:
        printf("U heeft een zeer matig cijfer.\n");
        break;
    case 4:
        printf("U heeft een matig cijfer\n");
        break;
    case 5:
        printf("U heeft bijna een voldoende.\n");
        break;
    case 6:
        printf("U heeft een voldoende.\n");
        break;
    case 7:
        printf("U heeft een redelijk goed cijfer.\n");
        break;
    case 8:
        printf("U heeft een goed cijfer.\n");
        break;
    case 9:
        printf("U heeft een zeer goed cijfer.\n");
        break;
    case 10:
        printf("U heeft een uitmuntend cijfer.\n");
        break;
    case 11:
        printf("U sluit het programma af.\n");
        break;
    default:
        printf("Ongeldige keuze, probeer het opnieuw.\n");
        break;
    }

    return 0;
}