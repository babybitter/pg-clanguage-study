#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[10] = { 0 };
	printf("������ܳ���Ϊ��%zu\n",sizeof(a));					//��������a���ܳ��ȣ�10 * 4 = 40 �ֽ�
	printf("����ĸ���Ϊ��%zu\n", sizeof(a) / sizeof(a[0]));		//������ܳ��� �� ��������Ԫ�صĳ���
	return 0;
}