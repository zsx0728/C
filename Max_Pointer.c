#include<stdio.h>

void main()
{
    int a,b;
    int *pointer;
    printf("please input two numbers:\n");
    scanf("%d,%d",&a,&b);
    (a>b)?(pointer=&a):(pointer=&b);
    printf("the max number is %d\n",*pointer);
}
