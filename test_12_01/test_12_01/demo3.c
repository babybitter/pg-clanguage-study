#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//time_t == long long
//NULL ������ʼ��ָ����� - 0
int main() {
	srand((unsigned int)time(NULL));	//ǿ������ת����unsigned int���ͣ�ʱ�����1970��1��1�յ����ڵ�����
	printf("%d\n",rand());		
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	return 0;
}