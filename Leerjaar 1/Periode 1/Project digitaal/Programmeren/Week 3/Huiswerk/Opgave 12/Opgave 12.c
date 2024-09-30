#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned long long faculteit(int n) {
    unsigned long long resultaat = 1; // Gebruik een unsigned long long om grote getallen op te slaan

    for (int i = 1; i <= n; i++) {
        resultaat *= i; // Vermenigvuldig het resultaat met i
    }

    return resultaat; // Geef het resultaat terug

}

int main(void) {
    int n;

    // Vraag de gebruiker om een positief geheel getal
    printf("Voer een positief geheel getal in: ");
    scanf("%d", &n);

    // Controleer of het getal geldig is
    if (n < 0) {
        printf("Faculteit is niet gedefinieerd voor negatieve getallen.\n");
    }
    else {
        // Roep de functie aan om de faculteit te berekenen
        unsigned long long resultaat = faculteit(n);
        printf("De faculteit van %d is: %llu\n", n, resultaat);
    }

    return 0;
}