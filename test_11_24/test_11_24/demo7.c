#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	if (n < 18)
		printf("δ����");
	else if (n <= 40)
		printf("��׳��");
	else if (n <= 89)
		printf("����");
	else
		printf("������");
	return 0;
}
