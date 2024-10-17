/*#include <stdio.h>


enum day { ma, di, wo, dd, vr, za, zo };
char* getDayName(enum day dag) {
    // Array van strings die overeenkomen met de enum waarden
   static const char* dayNames[] = {
        "Ma",
        "Di",
        "Wo",
        "Do",
        "Vr",
        "Za",
        "Zo"
    };
    return dayNames[dag];
}

void main()
{
    enum day weekend = za;
	printf("Het weekend is: %s\n", getDayName(weekend));
}
*/