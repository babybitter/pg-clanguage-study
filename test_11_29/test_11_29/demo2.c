#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////��ӡ1~10��ֵ
//int main() {
//	int n = 1;
//	while (n <= 10) {
//		printf("%d ", n++);
//	}
//	return 0;
//}


//����һ�����֣��������������
int main() {
	int n = 0 ;
	scanf("%d",&n);
	while (n != 0) {
		printf("%d ", n % 10);
		n /= 10;
	} 
	return 0;
}