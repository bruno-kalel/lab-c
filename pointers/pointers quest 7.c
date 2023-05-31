// 3105 quest 7

#include "stdio.h"

int main()
{
    float array[10];

    for (int i = 0; i < 10; i++)
    {
        printf("end. %d: %p\n", i, (void*)&array[i]);
    }

    return 0;
}