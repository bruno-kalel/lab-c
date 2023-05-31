// 3105 quest 6

#include "stdio.h"
#include "stdlib.h"

int soma_dobro(int *ptrA, int *ptrB)
{
    *ptrA += *ptrA;
    *ptrB += *ptrB;
    return printf("%d",*ptrA+*ptrB);
}

int main()
{
    char input[8];
    int inteiro1;
    int inteiro2;

    int *ptrInteiro1;
    int *ptrInteiro2;

    ptrInteiro1 = &inteiro1;
    ptrInteiro2 = &inteiro2;

    printf("inteiro1: ");
    fgets(input, sizeof(input), stdin);
    inteiro1 = strtol(input, NULL, 10);

    printf("inteiro2: ");
    fgets(input, sizeof(input), stdin);
    inteiro2 = strtol(input, NULL, 10);

    printf("soma_dobro\n");
    soma_dobro(ptrInteiro1, ptrInteiro2);

    return 0;
}