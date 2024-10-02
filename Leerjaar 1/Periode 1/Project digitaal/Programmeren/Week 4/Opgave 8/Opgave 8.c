#include <stdio.h>
#include <stdbool.h>

// Hulpfunctie om te controleren of een getal een priemgetal is
int isPriem(int num) {
    if (num <= 1) return false; // 0 en 1 zijn geen priemgetallen
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false; // Als num deelbaar is door i, is het geen priemgetal
    }
    return true; // Als we geen delers vinden, is het een priemgetal
}

// Functie om de som van priemgetallen van 1 t/m n te berekenen
int somVanPriemGetallen(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (isPriem(i)) {
            sum += i; // Voeg het priemgetal toe aan de som
        }
    }
    return sum;
}

int main() {
    int n = 10;
    int l = somVanPriemGetallen(n);
    printf("De som van alle priemgetallen van 1 t/m %d is: %d\n", n, l);
    return 0;
}