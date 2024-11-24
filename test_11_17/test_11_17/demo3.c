#include <stdio.h>

int main() {
	printf("%d\n",'a');			//字符a的ASCII码值为97
	printf("%c\n", 'a');
	printf("%c\n", 'a'-32);		//字符A和a的ASCII码值的差值为32
	printf("%d\n", '\n');		//换行符“\n”的ASCII码值为10
	printf("%d\n",'0');			//字符“0”的ASCII码值为48
	return 0;
}

//打印可显示字符
//int main()
//{
//	for (int i = 32; i <= 127; i++) {
//		printf("%c ",i);
//	}
//	return 0;
//}