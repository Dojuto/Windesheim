#include <stdio.h>

void main()
{
	int i, j, a = 219, b = 255;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			if ((i + j) % 2 == 0)
				printf("%c%c", a, a);
			else
				printf("%c%c", b, b);
		}
		printf("\n");
	}
}