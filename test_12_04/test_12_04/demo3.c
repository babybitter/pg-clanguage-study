#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test() {				
	int n = 0;
	if (n == 1)				//n != 1,���������û��return����ֵ����ֵ����������߼����⡣
		return 3.5;	
	printf("test\n");
	
}
int main() {
	int r = test();
	printf("%d\n", r);		
	return 0;
}