#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 1 , sum = 0;
	for ( i = 1; i < 100 ; i++)
	{
		if (i % 3 == 0) {
			sum += i;
			printf("%d ", i);
		}
	}
	printf("\n1~100之间3的倍数之和%d\n",sum);
	return 0;
}