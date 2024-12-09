//函数的返回类型如果不写，编译器会默认函数的返回类型是int

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

test() {
	printf("test\n");
}
int main() {
	int r = test();
	printf("%d\n", r);
	return 0;
}