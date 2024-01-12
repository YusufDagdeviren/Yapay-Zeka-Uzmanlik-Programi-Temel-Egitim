#include <stdio.h>
#define MAX 4

struct part
{
    int number;
    char name[10];
} data[MAX] = {1, "Smith", 2, "Jones", 3, "Adams", 4, "Wilson"};

int main(void)
{
    struct part *p_part;
    int count;
    p_part = data;
    for (count = 0; count < MAX; count++)
    {
        printf("\n % d % s", p_part->number, p_part->name);
        p_part++;
    }

    return 0;
}
