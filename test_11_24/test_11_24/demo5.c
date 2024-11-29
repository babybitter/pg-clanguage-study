#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	int year = 0, month = 0, day = 0;
//	scanf("%d %d %d",&year,&month,&day);
//	printf("%d %d %d", year, month, day);
//	return 0;
//}


int main() {
	int year = 0, month = 0, day = 0;
	scanf("%d%*c%d%*c%d", &year, &month, &day);
	printf("%d %d %d", year, month, day);
	return 0;
}

