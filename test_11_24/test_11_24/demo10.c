#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int a = 0, b = 0;
//	scanf("%d",&a);
//	b =( a > 5 ? 3 : -3 );
//	printf("%d",b);
//	return 0;
//}


//������Ŀ������ж��������нϴ������
#include <stdio.h>
int main() {
	int  a = 0, b = 0 ;
	scanf("%d %d", &a, &b);
	int c = a > b ? a : b;
	printf("%d\n",c);
	return 0;
}