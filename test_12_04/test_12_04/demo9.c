#define  _CRT_SECURE_NO_WARNINGS
#include "add.h"
#include <stdio.h>
int main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int s = add(a, b);
	printf("%d", s);
	return 0;
}