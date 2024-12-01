#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	if (n < 18)
		printf("未成年");
	else if (n <= 40)
		printf("青壮年");
	else if (n <= 89)
		printf("老年");
	else
		printf("老寿星");
	return 0;
}
