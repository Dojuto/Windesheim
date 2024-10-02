#include <stdio.h>

int Som37(int n);

void main()
{
    int n = 10;
    int resultaat = Som37(n);
    printf("De som van alle getallen die deelbaar zijn door 3 en 7 t/m %d is %d\n", n, resultaat);
}

int Som37(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0 || i % 7 == 0) {
            sum += i;
        }
    }
    return sum;
}