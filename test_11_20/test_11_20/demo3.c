//#include <stdio.h>
//#include <stdbool.h>
//int main() {
//	printf("%zd\n",sizeof(int));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(bool));
//	return 0;
//}	

#include <stdio.h>
int main() {
	long l = 1000;
	int b = 10;
	printf("%zd", sizeof(b=l+1));		//b是int类型，只能容纳4个字节，多出来的直接挤掉
	return 0;
}