#include <stdio.h>
#include <string.h> // string fonksiyonlarını kullanabilmek için eklenen kütüphane

struct entry
{
    char fname[10];
    char lname[12];
    char phone[8];
};

int main(void)
{
    struct entry list[10];

    for (int i = 0; i < 10; i++)
    {
        sprintf(list[i].fname, "Yusuf %d", i);
        sprintf(list[i].lname, "Dagdeviren %d", i);
        sprintf(list[i].phone, "0555 %d", i);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%s %s %s\n", list[i].fname, list[i].lname, list[i].phone);
    }

    return 0;
}
