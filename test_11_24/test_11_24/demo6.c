#define  _CRT_SECURE_NO_WARNINGS

//if ≈–∂œ”Ôæ‰
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n == 0) {
		printf("this number is zero");
	}
	else {
		if (n > 0) {
			printf("this number is Higher than zero");
		}
		else {
			printf("this number is Lower than zero");
		}
	}
	return 0;
}