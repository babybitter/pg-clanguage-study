#define  _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//void test()
//{
//    int i = 1;
//    i++;
//    printf("%d ", i);
//}
//
//int main()
//{
//    int i = 1;
//    for (i = 0; i < 5; i++)
//    {
//        test();
//    }
//    return 0;
//}

//代码2
#include <stdio.h>

void test()
{
    //static修饰局部变量
    static int i = 0;
    i++;
    printf("%d ", i);
}

int main()
{
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        test();
    }
    return 0;
}