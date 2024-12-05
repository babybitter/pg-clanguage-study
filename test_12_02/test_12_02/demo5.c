#define  _CRT_SECURE_NO_WARNINGS

//二分查找
#include <stdio.h>
#include <stdbool.h>
int main() {
	int n = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	scanf("%d",&n);
	int len = sizeof(arr) / sizeof(arr[0]);
	int left = 0,right = len - 1;
	bool flag = false;
	while (left <= right) {
		int mid = (left + right) / 2; //计算中间值
		if (arr[mid] < n) {
			left = mid + 1;
		}
		else if (arr[mid] > n) {
			right = mid - 1;
		}
		else {
			printf("找到了！，下标为%d", mid);
			flag = true;
			break;
		}
	}
	if (!flag)
		printf("未找到%d",n);
	return 0;
}