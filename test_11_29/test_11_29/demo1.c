#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	int n = 0;
//	scanf("%d",&n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("����Ϊ0");
//		break;
//	case 1:
//		printf("����Ϊ1");
//		break;
//	case 2:
//		printf("����Ϊ2");
//		break;
//	}
//	return 0;
//}

int main() {
	int n;
	scanf("%d",&n);
	switch (n) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
	}
	return 0;
}