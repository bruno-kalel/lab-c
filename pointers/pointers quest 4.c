// 3105 quest 4

#include <stdio.h>
#include <stdlib.h>

int troca_valores(int *ptrA, int *ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    return 0;
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

    printf("troca_valores\n");
    troca_valores(ptrInteiro1, ptrInteiro2);

    printf("inteiro1: %d\n", inteiro1);
    printf("inteiro2: %d\n", inteiro2);

    return 0;
}