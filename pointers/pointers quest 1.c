// 3105 quest 1

#include <stdio.h>

int main()
{
    int inteiro;
    float real;
    char caractere;

    int *ptrInteiro;
    float *ptrReal;
    char *ptrCaractere;

    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrCaractere = &caractere;

    *ptrInteiro = 1;
    *ptrReal = 2;
    *ptrCaractere = 'a';

    printf("%d\n", inteiro);
    printf("%f\n", real);
    printf("%c\n", caractere);

    *ptrInteiro = 10;
    *ptrReal = 20;
    *ptrCaractere = 'b';

    printf("%d\n", inteiro);
    printf("%f\n", real);
    printf("%c\n", caractere);

    return 0;
}