#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


// faculteit
double faculteit(int num) {
	int result = 1;
	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	return 1.0 / result;
}


// euler


void main() {

	// faculteit
	double num;

	printf("Geef een n >> ");
	scanf("%lf", &num);

	printf("%lf faculteit = %.10lf \n", num, faculteit(num));

}

	