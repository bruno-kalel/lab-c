// 3105 quest 2

#include <stdio.h>

int main()
{
    int inteiro1;
    int inteiro2;

    printf("%p\n", (void*)&inteiro1);
    printf("%p\n", (void*)&inteiro2);

    if (&inteiro1 > &inteiro2)
    {
        printf("inteiro1Ptr maior ender.");
    }
    else
    {
        printf("inteiro2Ptr maior ender.");
    }

    return 0;
}