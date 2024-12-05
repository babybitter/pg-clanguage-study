#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	int arr[3][4];
//	for (int i = 0; i < 3; i++){
//		for (int j = 0; j < 4; j++) {
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//		}
//		//printf("\n");
//	}
//	return 0;
//}

int main() {
	double arr[3][4] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
		//printf("\n");
	}
	return 0;
}