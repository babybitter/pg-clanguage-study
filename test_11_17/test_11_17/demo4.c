#include <stdio.h>

int main() {
	printf("\\");
	printf("\"");
	printf("\a");						//发出警告
	printf("\n");						//换行
	printf("abcdef\bg");				//退格
	printf("abcd\tefgh\tijkl\tmn");		//“相当于Tab”
	return 0;
}