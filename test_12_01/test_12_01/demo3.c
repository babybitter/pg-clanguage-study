#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//time_t == long long
//NULL 用来初始化指针变量 - 0
int main() {
	srand((unsigned int)time(NULL));	//强制类型转换成unsigned int类型，时间戳，1970年1月1日到现在的秒数
	printf("%d\n",rand());		
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	return 0;
}