#include<stdio.h>
#include <math.h>

void main() {
# pragma region rest
	/*
	int a = 35;
	int b = 16;

	int res = a / b;
	int rest = a % b; // modul
	printf("Resultaat is: %d\n", res);
	printf("De rest is: %d\n", rest);
	
	//variabelen voor gehele getallen!!
	int a = 10;		// 4 bytes geheugen: 32 bits!!
	short b = 20;
	long long c = 30;
	char d = 65;		//1 byte geheugen: 8 bits! 255 getal

	printf("Een int gebruikt: %zu bytes\n", sizeof(a));
	printf("Een short gebruikt: %zu bytes\n", sizeof(b));
	printf("Een long gebruikt: %zu bytes\n", sizeof(c));
	printf("Een char gebruikt: %zu bytes\n", sizeof(d));
	

	char d = 'A';
	printf("Het karakter als getal: %d\n", d);
	printf("Het karakter als teken: %c\n", d);
	
	// variablen voor komma gegtallen!!

	double x1 = 5;
	double x2 = 2;
	double y;
	double res = x1 / x2;



	printf("Resultaat van de deling: %.2f\n", res);

	float a1; // Float gebruikt 4 bytes
	double a2; // Double gebruikt 8 bytes
	

	unsigned int leeftijd;
	*/
#pragma endregion

#pragma region wiskundige operaties
	double getal = 12.6754;
	double res = sqrt(getal);

		printf("De wortel van %.2f is: %.2f\n", getal, res);

#pragma endregion

#pragma region confersies
		float getall = 123.786f;
		int a = (int)getall; //casten naar een type

			printf("Het getal is: %d\n", a); 
#pragma endregion

}