#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int)time(NULL));
    int n = rand() % 101;
    int input = 0;
    scanf("%d", &input);
    while (input != n) {
        if (input >= n) {
            printf("�´���\n");
        }
        else {
            printf("��С��\n");
        }
        scanf("%d", &input);
    }
    printf("������\n");
    return 0;
}