#define  _CRT_SECURE_NO_WARNINGS

//��ӡ100~200֮�������
#include <stdio.h>
#include <math.h>

int main() {
	int i = 0;
	for (i = 101; i <= 200; i+=2) {		//�Ż����룬����ż�������������������Դ�101��ʼ�Ҳ�������Ϊ2
		int flag = 1;
		int j = 0;
		for (j = 2; j <= sqrt(i); j++) {	//sqrt �����ţ���������µ����ֱ������������Ҳ���ü�����
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
