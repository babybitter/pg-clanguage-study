//写一个程序，如果是偶数就返回1 如果是奇数就返回0

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int even(int x) {
	if (x % 2 == 0) {
		return 1;			//返回1
	}
	else {
		return 0;			//返回0
	}
}
int main() {
	int a = 0;
	scanf("%d", &a);
	int ret = even(a);		//even 偶数	
	if (ret == 1)			//根据返回值判断奇偶性
		printf("是偶数");
	else
		printf("是奇数");
	return 0;
}