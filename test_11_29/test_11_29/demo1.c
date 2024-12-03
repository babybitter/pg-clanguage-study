#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	int n = 0;
//	scanf("%d",&n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("余数为0");
//		break;
//	case 1:
//		printf("余数为1");
//		break;
//	case 2:
//		printf("余数为2");
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
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误！\n");
	}
	return 0;
}