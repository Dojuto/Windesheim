#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	double A, B, C;
	double discriminant, antwoord1, antwoord2,wortel, kwadraat, imiginaire, antwoord3 ;

	printf("Vul hier drie getallen in (gescheiden door een spatie):\n");
	scanf("%lf %lf %lf", &A, &B, &C);

	discriminant = B * B - 4 * A * C;

	if (discriminant > 0) {
		antwoord1 =  (-B + sqrt(discriminant)) / (2 * A);
		antwoord2 = (- B - sqrt(discriminant)) / (2 * A);
		printf("De oplossingen zijn: %.2lf en %.2lf", antwoord1, antwoord2);
	}
	else if (discriminant == 0) {
		antwoord1 = -B / (2 * A);
		printf("De oplossing is: %.2lf", antwoord1);
	}
	else {
		printf("Er is geen oplossing");
	}
}