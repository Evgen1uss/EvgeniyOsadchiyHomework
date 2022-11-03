#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

gid_t getgid(void);
gid_t getegid(void);
pid_t getpid(void);
pid_t getppid(void);
pid_t getpgrp(void);
uid_t getuid(void);
uid_t geteuid(void);

int main()
{
    printf("Getgid: %d\n",   getgid());
    printf("Getegid: %d\n",  getegid());
    printf("Getpid : %d\n",  getpid());
    printf("Getppid: %d\n",  getppid());
    printf("Getppgrp: %d\n", getpgrp());
    printf("Getuid: %d\n",   getuid());
    printf("Geteuid: %d\n",  geteuid());
}