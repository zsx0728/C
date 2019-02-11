#include<stdio.h>
#include<stdlib.h>

void main ()
{
    int n;
    int fac(int );
    printf("Please input a number:\n");
    scanf("%d",&n);
    printf("the n! equal %d\n",fac(n));
}

int fac(int n)
{
    int num;
    if(n>1)
    {   
        num=n * fac(n-1);
    }   
    else if (n==1)
    {   
        num=1;
    }   
    else 
    {   
        printf("Please input a correct number!\n");
        exit (3);
    }   
    return (num);
}
