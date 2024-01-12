#include <stdio.h>
void printStars(int n)
{
    if (n == 1)
    {
        printf("*");
        return;
    }
    else
    {
        printf("*");
        printStars(n - 1);
    }
}
int mystery(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        int a = n / 10;
        int b = n % 10;
        return mystery(a + b);
    }
}
int mystery2(int n)
{
    if (n < 10)
    {
        return (10 * n) + n;
    }
    else
    {
        int a = mystery2(n / 10);
        int b = mystery2(n % 10);
        return (100 * a) + b;
    }
}

int main(void)
{
    // printStars(9);
    // printf("%d\n",mystery(648));
    printf("%d\n", mystery2(348));
    return 0;
}
