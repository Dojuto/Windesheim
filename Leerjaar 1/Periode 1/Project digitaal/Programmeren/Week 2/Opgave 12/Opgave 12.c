#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	int x;
	int n;
	


	printf("Vul hier een getal in:\n");
	scanf("%d", &x);
	printf("Vul hier een tweede getal in:\n");
	scanf("%d", &n);

	if (x > 0.0 && n > 0) {
		double resultaat = pow(x, n);
		printf("De macht van uw gehele getal is: %lf\n", resultaat);
	}
	else {
		printf("Sorry, U moet een positief getal invullen.\n");
	}

	

	
	
}