#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
extern int Add(int x, int y);
int main() {
	int a = 100;
	int b = 200;
	int c = Add(a, b);
	printf("%d",c);

	return 0;
}