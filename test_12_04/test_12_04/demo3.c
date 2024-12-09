#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test() {				
	int n = 0;
	if (n == 1)				//n != 1,这种情况，没有return返回值，数值随机，存在逻辑问题。
		return 3.5;	
	printf("test\n");
	
}
int main() {
	int r = test();
	printf("%d\n", r);		
	return 0;
}