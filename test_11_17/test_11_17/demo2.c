//printf 和 库函数
#include <stdio.h>
int main()
{
	int n = 100;
	printf("%d\n",n);			//%d 指定为整形
	printf("%c\n",'x');			//%c 指定为字符 ''是字符 ""是字符串
	printf("%f\n", 3.14159);	//%f 指定为小数
	printf("%lf\n", 3.14159);	//%lf 指定为双精度类型
	return 0;
}