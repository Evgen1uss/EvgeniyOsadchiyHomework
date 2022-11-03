#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

int main() {
    int status;
    pid_t pid;
    pid = fork();

    if (pid > 0) 
    {
        system("ps -l");
        wait(&status);
        printf("\n\n");
        system("ps -l");
    } 
    else 
    {
        exit(0);
    }
}