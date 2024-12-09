#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printf_a(int a[3][2], int h, int l) {
	int i = 0;
	for (i = 0; i < 3; i++) {
		int j = 0;
		for ( j = 0; j < 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int a[3][2] = { 1,2,3,4,5,6 };
	printf_a(a,3,2);
	return 0;
}