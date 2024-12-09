#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a,int b)
{
	int k = a + b;
	return k;
}

int main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int s = sum(a, b);
	printf("%d", s);
	return 0;
}