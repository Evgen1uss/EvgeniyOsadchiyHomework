#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <wait.h>

void System()
{
    pid_t pid;
    int index;

    pid = fork();

    char *args[] = {"./test.out", NULL};
    execv(args[0], args);
    wait(&index);
}

int main()
{
    System();
}