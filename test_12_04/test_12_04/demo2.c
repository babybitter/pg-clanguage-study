//дһ�����������ż���ͷ���1 ����������ͷ���0

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int even(int x) {
	if (x % 2 == 0) {
		return 1;			//����1
	}
	else {
		return 0;			//����0
	}
}
int main() {
	int a = 0;
	scanf("%d", &a);
	int ret = even(a);		//even ż��	
	if (ret == 1)			//���ݷ���ֵ�ж���ż��
		printf("��ż��");
	else
		printf("������");
	return 0;
}