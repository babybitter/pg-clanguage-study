#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	char a[6] = { 'a','b','c','d','e'};
//	printf("%s",a);
//	return 0;
//}
#include <stdio.h>
int main() {
	char a[6] = { 'a','b','c','d','e' };
	for (int i = 0; i < 6; i++)
	{
		printf("%c ", a[i]);
	}
	return 0;
}