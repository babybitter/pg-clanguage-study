#include <stdio.h>
//按Ctrl + F10 调试代码

int main()		//main函数是程序的入口，程序从main函数的第一行开始执行，没有main函数，无法执行
{
	printf("Hello World!\n");

	return 0;	//返回的‘0’是一个整数，所以上面要写成“int main”
}

/*

1.
void main()		//古老的写法，不推荐
{

}

2.
int main(void)	//void可写可不写
{

	return 0;
}

3.
int main(int argc, char* argv[])	//main函数本身是有参数的，参数有特殊用途
{

}
*/

