#include <stdio.h>

// Functie om vier getallen te sorteren van groot naar klein
void sort_descending(int* a, int* b, int* c, int* d) {
    int temp;
    if (*a < *b) { temp = *a; *a = *b; *b = temp; }
    if (*a < *c) { temp = *a; *a = *c; *c = temp; }
    if (*a < *d) { temp = *a; *a = *d; *d = temp; }
    if (*b < *c) { temp = *b; *b = *c; *c = temp; }
    if (*b < *d) { temp = *b; *b = *d; *d = temp; }
    if (*c < *d) { temp = *c; *c = *d; *d = temp; }
}

int main() {
    int num1, num2, num3, num4;

    // Vraag de gebruiker om vier getallen in te voeren
    printf("Voer vier gehele getallen in:\n");
    printf("Getal 1: ");
    scanf("%d", &num1);
    printf("Getal 2: ");
    scanf("%d", &num2);
    printf("Getal 3: ");
    scanf("%d", &num3);
    printf("Getal 4: ");
    scanf("%d", &num4);

    // Sorteer de getallen van groot naar klein
    sort_descending(&num1, &num2, &num3, &num4);

    // Print de gesorteerde getallen
    printf("Getallen van groot naar klein: %d %d %d %d\n", num1, num2, num3, num4);

    return 0;
}