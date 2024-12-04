#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	int math[50];	//数组的创建
//	int array[5] = { 1,2,3,4,5 };	//数组的完全初始化
//	int a[5] = { 0 };	//数组的不完全初始化
//	return 0;
//}

//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	//			 0 1 2 3 4
//	printf("%d", a[0]);
//	printf("%d", a[1]);
//	printf("%d", a[2]);
//	printf("%d", a[3]);
//	printf("%d", a[4]);
//	a[2] = 30;
//	printf(" %d", a[2]);
//	return 0;
//}

int main() {
	int a[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);			//这是一个数据元素，所以要取地址
	}
	for ( int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}