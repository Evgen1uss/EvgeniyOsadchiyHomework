#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

pid_t getpid(void);

void create_process(pid_t pid, int tick)
{
    pid = fork();

    tick++;
    printf("pid: %d, tick: %d\n", getpid(), tick);
    exit(0);
}

void create_main_process(pid_t m_pid, int tick)
{
    m_pid = fork();
    
    tick++;
    printf("pid: %d, tick: %d\n", getpid(), tick);

    pid_t pid;
    create_process(pid, tick);
    create_process(pid, tick);
    exit(0);
}

int main ()
{
    int tick = 0;
    pid_t m_pid;

    create_main_process(m_pid, tick);
    create_main_process(m_pid, tick);
}