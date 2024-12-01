#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int flag = 0;
//	scanf("%d", &flag);
//	if (!flag) {
//		printf("Hello World!");
//	}
//	return 0;
//}

#include <stdio.h>
int main() {
	int yue;
	scanf("%d",&yue);
	if (yue == 12 || yue == 1 || yue == 2) {
		printf("是冬天");
	}
	else {
		printf("不是冬天");
	}
	return 0;
}