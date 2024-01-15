#include <stdio.h>
#include <unistd.h>
#define MSGSIZE 16
char *msg1 = "hello, world #1";
char *msg2 = "hello, world #2";
int main()
{
    char inbuf[MSGSIZE];
    int p[2], i;
    if (pipe(p) < 0)
        exit(1);
    write(p[1], msg1, MSGSIZE MSGSIZE MSGSIZE); /* write pipe */
    write(p[1], msg2, MSGSIZE MSGSIZE MSGSIZE);
    for (i = 0; i < 2; i++)
    {
        read(p[0], inbuf, MSGSIZE); /* read pipe */
        printf("% s\n", inbuf);
    }
    return 0;
}