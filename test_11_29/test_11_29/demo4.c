#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int i = 1;
//	do {
//		printf("%d ", i++);
//	}
//	while (i <= 10);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int n = 0,c = 0;
//	scanf("%d", &n);
//	do {
//		n /= 10;
//		c++;
//	} while (n != 0);
//	printf("%d", c);
//	return 0;
//}

#include <stdio.h>
#include <math.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	int ws = log10(n) + 1;
	printf("%d", ws);
	return 0;
}