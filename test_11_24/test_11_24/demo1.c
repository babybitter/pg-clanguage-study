#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	int a = 0, b = 0, c = 0;
//
//	int n = scanf("%d %d %d",&a,&b,&c);
//
//	printf("输出结果为：\n");
//	printf("%d %d %d\n",a,b,c);	//输出输入的三个数
//	printf("%d\n",n);			//有效数字的个数
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

