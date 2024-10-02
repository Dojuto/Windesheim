#include <stdio.h>

void CijferSwap(int* n) {
    int originalNumber = *n;
    int reversedNumber = 0;

    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        reversedNumber = reversedNumber * 10 + digit;
        originalNumber /= 10;
    }

    *n = reversedNumber;
}

int main() {
    int number = 567;
    printf("Original number: %d\n", number);
    CijferSwap(&number);
    printf("Reversed number: %d\n", number);

    return 0;
}