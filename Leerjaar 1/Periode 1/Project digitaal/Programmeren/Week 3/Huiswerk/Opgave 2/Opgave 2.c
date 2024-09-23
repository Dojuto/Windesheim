#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main() {
	int a = 0;
	

	printf("Vul hier een integer in: \n");
	scanf("%d", &a);

	if (a > 100) {
		printf("Waar");
	}
	else {
		while (a < 100) 
			a = a * -2;
			printf("a is nu %d \n", a);
	}
}