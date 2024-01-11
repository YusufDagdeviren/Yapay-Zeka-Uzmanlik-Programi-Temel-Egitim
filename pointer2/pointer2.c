#include <stdio.h>

int main(void)
{
    int k = 3, j = 5, *p = &k, *q = &j, *r;
    double x;
    printf("%d\n", (p == (&k)));
    printf("%d\n", (**&p));
    // (7 * 3) / 5 + 7 = 11
    printf("%d\n", ((((7 * (*p))) / (*q)) + 7));
    // 5 * 3
    printf("%d\n", (*(r = (&j))) *= (*p));

    return 0;
}