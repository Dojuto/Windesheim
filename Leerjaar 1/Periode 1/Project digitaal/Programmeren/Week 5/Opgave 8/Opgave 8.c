#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool IsSchrikkel(int y);
int schrikkelDagen(int d1, int m1, int y1, int d2, int m2, int y2);


void main()
{
    printf("%d\n", schrikkelDagen(1, 1, 2000, 1, 2, 2000)); // 0
    printf("%d\n", schrikkelDagen(1, 1, 2000, 3, 3, 2020)); // 6
    printf("%d\n", schrikkelDagen(1, 1, 2000, 28, 2, 2020)); // 5

    printf("%d\n", schrikkelDagen(1, 3, 2000, 28, 2, 2020)); // 4

    printf("%d\n", schrikkelDagen(1, 3, 2000, 29, 2, 2020)); // 5

    printf("%d\n", schrikkelDagen(1, 3, 2000, 30, 1, 2020)); // 4
    printf("%d\n", schrikkelDagen(1, 3, 2000, 28, 1, 2020)); // 4




}



bool IsSchrikkel(int y) {
        return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
    }

int schrikkelDagen(int d1, int m1, int y1, int d2, int m2, int y2) 
{
    int count = 0;

    // Controleer of het beginjaar een schrikkeljaar is en of we 29 februari moeten meetellen
    if (IsSchrikkel(y1) && (m1 < 3 || (m1 == 3 && d1 == 1))) {
        count++;
    }

    // Controleer of het eindjaar een schrikkeljaar is en of we 29 februari moeten meetellen
    if (IsSchrikkel(y2) && (m2 > 2 || (m2 == 2 && d2 == 29))) {
        count++;
    }

    // Tel het aantal schrikkeljaren tussen de begin- en eindjaren exclusief
    for (int year = y1 + 1; year < y2; year++) {
        if (IsSchrikkel(year)) {
            count++;
        }
    }

    return count;
}







