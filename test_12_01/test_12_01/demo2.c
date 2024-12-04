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
            printf("猜大了\n");
        }
        else {
            printf("猜小了\n");
        }
        scanf("%d", &input);
    }
    printf("猜中了\n");
    return 0;
}