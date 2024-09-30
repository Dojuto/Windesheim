#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int index, i;
    unsigned long long fib0 = 0, fib1 = 1, fibn = 0;

   
    printf("Voer een index in om het bijbehorende Fibonacci-getal te berekenen: ");
    scanf("%d", &index);

   
    if (index < 0) {
        printf("De index moet een niet-negatief geheel getal zijn.\n");
        return 1; 
    }

  
    if (index == 0) {
        fibn = fib0;
    }
    else if (index == 1) {
        fibn = fib1;
    }
    else {
        for (i = 2; i <= index; i++) {
            fibn = fib0 + fib1;
            fib0 = fib1;
            fib1 = fibn;
        }
    }
    printf("Het Fibonacci-getal bij index %d is: %llu\n", index, fibn);
    return 0;
}