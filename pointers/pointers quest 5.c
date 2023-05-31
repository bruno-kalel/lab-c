// 3105 quest 5

#include <stdio.h>
#include <stdlib.h>

int maior_menor(int *ptrA, int *ptrB)
{
    if (*ptrB > *ptrA)
    {
        int temp = *ptrA;
        *ptrA = *ptrB;
        *ptrB = temp;
    }
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

    printf("maior_menor\n");
    maior_menor(ptrInteiro1, ptrInteiro2);

    printf("inteiro1: %d\n", inteiro1);
    printf("inteiro2: %d\n", inteiro2);

    return 0;
}