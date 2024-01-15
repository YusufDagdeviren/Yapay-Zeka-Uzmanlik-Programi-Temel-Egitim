main(int argc, char *argv[])
{
    int i, son, pid;
    son = atoi(argv[1]); /* convert char to integer */
    pid = fork();
    if (pid == 0)
        execlp("./program3", "program3", "2", NULL);
    for (i = 0; i < son; i++)
        printf("child\n");
}