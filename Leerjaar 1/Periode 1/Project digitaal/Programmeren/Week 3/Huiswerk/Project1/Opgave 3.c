#include<stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	for(int i = 0; i < a; i++) 
	{printf("Het kwadraat van %d is %d\n", i, i * i);}
}