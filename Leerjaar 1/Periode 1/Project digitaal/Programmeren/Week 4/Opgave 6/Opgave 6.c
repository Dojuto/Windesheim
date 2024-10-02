#include <stdio.h>

// Functie declaraties
int GCD(int a, int b);
int LCM(int a, int b);
int KleinsteSomDeler(int n);

int main() {
    int n = 4;
    int result = KleinsteSomDeler(n);
    printf("Het kleinste getal dat deelbaar is door alle getallen van 1 t/m %d is: %d\n", n, result);
    return 0;
}

// Functie om de grootste gemene deler te berekenen
int GCD(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Functie om de kleinste gemene veelvoud te berekenen
int LCM(int a, int b) {
    return (a / GCD(a, b)) * b;
}

// Functie om het kleinste getal te vinden dat deelbaar is door alle getallen van 1 t/m n
int KleinsteSomDeler(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = LCM(result, i);
    }
    return result;
}