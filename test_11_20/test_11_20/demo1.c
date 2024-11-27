#include <stdio.h>

// \b 退格符
int main()
{
	printf("abcdefghi\b");
	//让程序在这里等待，不让他继续往下走
	getchar();
	return 0;
}