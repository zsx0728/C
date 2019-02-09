#include<stdio.h>
//judge the year whether a leap year

void PrintWrong()
{
    printf("Not Leap year!\n");
}

void PrintRight()
{
    printf( "Leap year!\n");
}

void main()
{
    int year=0;
    printf("Please input a number of year:");
    scanf("%d",&year);
    if (year%4==0)
    {   
        if (year%100==0)
        {   
            (year%400==0)?PrintRight():PrintWrong();
        }   
        else
            PrintWrong();
    }   
    else
        PrintWrong();
}
