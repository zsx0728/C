#include<sys/types.h>
#include<linux/sem.h>
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    key_t key;
    int semid,semval;
    union semun arg;
    if((key=ftok("/home/cff",'c'))==-1)
    {
        perror("key error!\n");
        exit(1);
    }
    
    if((semid=semget(key,1,IPC_CREAT|0666))==-1)
    {
        perror("semget error!\n");
        exit(1);
    }

    while(1)
    {
        if((semval=semctl(semid,0,GETVAL,0))==-1)
        {
            perror("semctl error!\n");
            exit(1);
        }

        if(semval>0)
        {
            printf("also have %d source can use!\n",semval);
        }
        else
        {
            printf("no sources can use!\n");
            break;
        }
        sleep(3);
    }
    exit(0);
}
