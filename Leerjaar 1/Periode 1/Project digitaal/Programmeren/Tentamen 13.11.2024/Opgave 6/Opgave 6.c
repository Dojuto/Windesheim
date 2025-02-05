#include <stdio.h>

vul2DArray(char* p[][8], int lengte, char *s1, char *s2) {
	for (int i = 0; i < lengte; i++) {
		for (int j = 0; j < lengte; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					p[i][j] = s1;
				}
				else {
					p[i][j] = s2;
				}
			}
			else {
				if (j % 2 == 0) {
					p[i][j] = s2;
				}
				else {
					p[i][j] = s1;
				}
			}
		}
	}
}

print2DArray(char* p[][8], int lengte, char* s1, char* s2) {
	for (int i = 0; i < lengte; i++) {
		for (int j = 0; j < lengte; j++) {
			// printf("%d : %d : %c\n", i, j, p[i][j]);
			printf("%c", *p[i][j]);
		}
		printf("\n");
	}
}

void main() {
	char a[8][8];
	char klinkers[1] = {'/'};
	char mozaik[1] = {'/'};
	vul2DArray(a, 8, klinkers, mozaik);
	print2DArray(a, 8, klinkers, mozaik);
}