#include <stdio.h>

void priemgetal(int n);


void main()
{
    int n = 11;
    priemgetal(n);
}

void priemgetal(int n)
{
    int ispriem = 1;

    if (n <= 1) {
        ispriem = 0;
    }
    else {
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0) {
                ispriem = 0;
                break;
            }
    }   

    if (ispriem) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
}