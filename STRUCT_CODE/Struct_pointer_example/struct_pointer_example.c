#include <stdio.h>
struct point
{
    int x;
    int y;
};
struct rect
{
    struct point pt1;
    struct point pt2;
};
struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}
int main(void)
{
    struct rect screen;
    struct point middle;

    screen.pt1 = makepoint(0, 0);
    screen.pt2 = makepoint(50, 100);
    middle = makepoint((screen.pt1.x + screen.pt2.x) / 2,
                       (screen.pt1.y + screen.pt2.y) / 2);
    struct point *p;
    struct rect *rp;
    p = &middle;
    rp = &screen;

    // . ile -> aynıdır ikisi de kullanılabilir
    printf("%d %d\n", p->x, p->y);
    printf("%d %d\n", (*p).x, (*p).y);

    printf("%d %d\n", (*rp).pt1.x, (*rp).pt1.x);
    printf("%d %d\n", (*rp).pt2.x, (*rp).pt2.x);

    printf("%d %d \n", rp->pt1.x, rp->pt1.y);
    printf("%d %d \n", rp->pt2.x, rp->pt2.y);

    return 0;
}
