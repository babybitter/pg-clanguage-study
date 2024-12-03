#define  _CRT_SECURE_NO_WARNINGS

//打印100~200之间的素数
#include <stdio.h>
#include <math.h>

int main() {
	int i = 0;
	for (i = 101; i <= 200; i+=2) {		//优化代码，首先偶数不可能是素数，所以从101开始且步长设置为2
		int flag = 1;
		int j = 0;
		for (j = 2; j <= sqrt(i); j++) {	//sqrt 开根号，如果根号下的数字被整除，后面的也不用计算了
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}
