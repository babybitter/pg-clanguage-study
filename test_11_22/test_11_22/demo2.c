#include <stdio.h>
int main() {
	printf("%d\n", 6 / 4);
	printf("%f\n", 6 / 4);
	printf("%f\n", 6.0 / 4);
	printf("%f\n", 6 / 4.0);
	return 0;

	//对于除法来来说，除号的两端如果都是整数，计算的是整数的除法,不会得到小数的。得到的是整除后的商。
	//除号的两端有浮点数。计算的是小数除法。
}