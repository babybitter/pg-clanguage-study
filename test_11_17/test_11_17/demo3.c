#include <stdio.h>

int main() {
	printf("%d\n",'a');			//�ַ�a��ASCII��ֵΪ97
	printf("%c\n", 'a');
	printf("%c\n", 'a'-32);		//�ַ�A��a��ASCII��ֵ�Ĳ�ֵΪ32
	printf("%d\n", '\n');		//���з���\n����ASCII��ֵΪ10
	printf("%d\n",'0');			//�ַ���0����ASCII��ֵΪ48
	return 0;
}

//��ӡ����ʾ�ַ�
//int main()
//{
//	for (int i = 32; i <= 127; i++) {
//		printf("%c ",i);
//	}
//	return 0;
//}