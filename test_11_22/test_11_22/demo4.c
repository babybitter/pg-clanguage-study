//单目操作符 <++，-->

#include <stdio.h>
int main() {
	int a = 5;

	//前置++，先计算，后输出
	printf("%d\n",++a);
	printf("%d\n", a);

	int b = 5;
	//后置++，先输出，后计算
	printf("%d\n",b++);
	printf("%d\n", b);
	return 0;
}