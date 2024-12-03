#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////打印1~10的值
//int main() {
//	int n = 1;
//	while (n <= 10) {
//		printf("%d ", n++);
//	}
//	return 0;
//}


//输入一个数字，输出他的逆序数
int main() {
	int n = 0 ;
	scanf("%d",&n);
	while (n != 0) {
		printf("%d ", n % 10);
		n /= 10;
	} 
	return 0;
}