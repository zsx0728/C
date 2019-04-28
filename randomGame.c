#include<stdio.h>
#include<stdlib.h>
void main()
{
    int computer;
    printf("stone scissors......");
    getchar();
    printf("cloth!\n");

    srand(time(NULL));
    computer=rand() % 10;

    if(computer >=0 && computer <=4)
    {
        printf("the computer choice:stone\n");
    } 
    else if (computer >=5 && computer <=7)
    {
        printf("the computer choice:scissors\n");
    }
    else
    {
        printf("the computer choice:cloth\n");
    } 
}
