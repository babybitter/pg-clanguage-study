#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	int a = 0, b = 0, c = 0;
//
//	int n = scanf("%d %d %d",&a,&b,&c);
//
//	printf("������Ϊ��\n");
//	printf("%d %d %d\n",a,b,c);	//��������������
//	printf("%d\n",n);			//��Ч���ֵĸ���
//	return 0;
//}

int main() {
	int a = 0, b = 0;
	
	while (scanf("%d %d",&a,&b) != -1) {
		int c = a + b;
		printf("%d",c);
		
	}
	return 0;
}

