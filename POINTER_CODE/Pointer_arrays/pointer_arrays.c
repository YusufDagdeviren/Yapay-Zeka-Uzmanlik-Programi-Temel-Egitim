#include <stdio.h>

int main(void)
{
    int i, offset, b[4] = {10, 20, 30, 40};
    int *bPtr = b;

    for (i = 0; i < 4; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }
    printf("*******************\n");
    for (offset = 0; offset < 4; offset++)
    {
        printf("*(b + %d) = %d\n", offset, *(b + offset));
    }
    printf("*******************\n");
    for (i = 0; i < 4; i++)
    {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
    }
    printf("*******************\n");
    for (offset = 0; offset < 4; offset++)
    {
        printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
    }

    return 0;
}