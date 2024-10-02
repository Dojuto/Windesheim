#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

// Functie om te controleren of een getal een priemgetal is
bool isPriem(int num) {
    if (num <= 1) return false; // 0 en 1 zijn geen priemgetallen
    for (int i = 2; i * i <= num; i++) { // Controleer tot de vierkantswortel van num
        if (num % i == 0) {
            return false; // num is deelbaar door i, dus het is geen priemgetal
        }
    }
    return true; // num is een priemgetal
} 

// Functie om priemgetallen van 2 t/m n te berekenen
void berekenPriemGetallen(int n) {
    printf("Priemgetallen van 2 tot %d zijn:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPriem(i)) {
            printf("%d ", i); // Print het priemgetal
        }
    }
    printf("\n"); // Nieuwe regel na het afdrukken van priemgetallen
}

int main() {
    int n;

    printf("Voer een integer in (n): ");
    scanf("%d", &n); // Gebruiker invoer

    if (n < 2) {
        printf("Geen priemgetallen beschikbaar in dit bereik.\n");
    }
    else {
        berekenPriemGetallen(n); // Roep de functie aan om priemgetallen te berekenen
    }

    return 0; // Terugkeerwaarde voor main
}