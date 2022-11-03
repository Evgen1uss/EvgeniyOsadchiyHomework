#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

pid_t getpid(void);

int main(void) 
{
    pid_t pid; /* идентификатор процесса */
    printf("Пока всего один процесс\n");

    printf("Вызов функции fork...\n");

    int clock = 2;

    printf("Введите количество секунд, сколько вы хотите длительность таймера в программе (по-умолчанию 2): ");
    scanf("%d", &clock);

    pid = fork(); /* Создание нового процесса */

    if (pid == 0) 
    {
        printf("Процесс - потомок\n");
    } 
    else if (pid > 0) 
    {
        printf("Родительский процесс, pid потомка %d\n", getpid());
    } 
    else 
    {
        printf("Ошибка вызова fork, потомок не создан\n"); 
    }

    int tick = 0;
    time_t clock_start;
    time(&clock_start);

    time_t clock_finish;
    while((difftime(clock_finish, clock_start)) < 2)
    {
        time(&clock_finish);
        tick++;
    }

    printf("Tick: %d\n", tick);
}