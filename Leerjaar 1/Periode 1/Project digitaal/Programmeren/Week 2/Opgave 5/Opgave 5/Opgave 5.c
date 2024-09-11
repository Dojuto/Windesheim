
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int N;
	int i;
	int sum = 0;
	printf("Vul hier een cijfer in:\n");
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		sum += i;
		if (i == N) {
			printf("%d = %d", i, sum);
		}
		else {
			printf("%d + ", i);
		}
	}
   

    








}