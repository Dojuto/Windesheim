#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


void priemsom(int l);
void ispriem(int n);
void zijnpriem(int x);
void main()
{
	int x = 11
	zijnpriem(x);
	ispriem(n);
}
void zijnpriem(int x)
{
	
}
void priemsom(int l)
{

}
void ispriem(int n)
{
	
	int ispriem = true;
	for (int i = n - 1; i > 1; i--)

	{

		if (n % i == 0)
		{
			ispriem = false;
		}
	}
	if (ispriem)
	{
		printf("is prime!\n");
	}
	else {
		printf("is geen priem");
	}
}

