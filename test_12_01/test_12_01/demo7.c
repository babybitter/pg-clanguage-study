#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[10] = { 0 };
	printf("数组的总长度为：%zu\n",sizeof(a));					//计算数组a的总长度，10 * 4 = 40 字节
	printf("数组的个数为：%zu\n", sizeof(a) / sizeof(a[0]));		//数组的总长度 ÷ 单个数组元素的长度
	return 0;
}