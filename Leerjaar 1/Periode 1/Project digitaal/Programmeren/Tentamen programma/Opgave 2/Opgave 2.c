#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



void main()
{
	int A;
	int B;
	int C;


	printf("Vul hier 3 interger in:\n");
	scanf("%d %d %d", &A, &B, &C);

	
	if (A >= B && A >= C) {
		printf("Grootste waarde is: %d\n", A);
	}
	else if (B >= A && B >= C) {
		printf("Grootste waarde is: %d\n", B);
	}
	else {
		printf("Grootste waarde is: %d\n", C);
	}

	if (A >= B && A <= C) {
		printf("Middelste waarde is: %d\n", A);
	}
	else if (B >= A && B <= C) {
		printf("Middelste waarde is: %d\n", B);
	}
	else {
		printf("Middelste waarde is: %d\n", C);
	}
	if (A <= B && A <= C) {
		printf("Kleinste waarde is: %d\n", A);
	}
	else if (B <= A && B <= C) {
		printf("Kleinste waarde is: %d\n", B);
	}
	else {
		printf("Kleinste waarde is: %d\n", C);
	}
	




}

