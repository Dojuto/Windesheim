#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void main() {
	int a;

	printf("Vul hier een integer in: \n");
	scanf("%d", &a);

	if (a > 0) {
		printf("Wat een mooi positief getal!");
	} 
	else if (a <= 0) {
		printf("Dit is een negatief getal!");
	}
}