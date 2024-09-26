#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main() {
	int teller = 0;

	while (teller <= 200) {
		printf("Even getal is: %d\n", teller);
		teller += 2;
	}
	return 0;
}