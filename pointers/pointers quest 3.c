// 3105 quest 3

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[8];
    int inteiro1;
    int inteiro2;

    printf("inteiro1: ");
    fgets(input, sizeof(input), stdin);
    inteiro1 = strtol(input, NULL, 10);

    printf("inteiro2: ");
    fgets(input, sizeof(input), stdin);
    inteiro2 = strtol(input, NULL, 10);

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