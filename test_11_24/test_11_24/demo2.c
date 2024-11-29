#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char arr[20] = { 0 };
	scanf("%[^\n]", &arr);
	printf("%s", arr);
	return 0;
}


