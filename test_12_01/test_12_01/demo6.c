#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;
}
