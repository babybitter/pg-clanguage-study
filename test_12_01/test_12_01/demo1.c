#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(){
//	flag:
//	printf("test1");
//	printf("test2");
//	goto flag;
//	return 0;
//}

//�������� 60���ػ�
#include <stdlib.h>
#include <string.h>
int main() {
	system("shutdown -s -t 60");
	char str[20] = { 0 };
	scanf("%s",str);
	if (strcmp(str,"������") == 0) {
		system("shutdown -a");
	}	
	return 0;
}
