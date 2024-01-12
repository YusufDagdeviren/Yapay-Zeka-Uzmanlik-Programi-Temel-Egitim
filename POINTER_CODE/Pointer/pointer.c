#include <stdio.h>

int main(void)
{
    int y = 5;
    int *ptr;
    ptr = &y;
    printf("%d\n", *ptr);
    printf("first address is %p\n", ptr);
    *ptr = 15;
    printf("%d\n", *ptr);
    printf("%d\n", y); // pointerın adresindeki değeri değiştirdiğimiz için y de değişti
    printf("second address is %p\n", ptr);
    int x = 10;
    ptr = &x;
    printf("%d\n", *ptr);
    printf("third address is %p\n", ptr);
    return 0;
}