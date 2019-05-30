#include<stdio.h>

void swap(int *,int *); 

int main(void)
{
    int a=0,b=0;
    int *p1=NULL,*p2=NULL;

    printf("please input two numbers:\n");
    scanf("%d %d",&a,&b);

    printf("the a is %d,the min is %d\n",a,b);
    p1=&a;
    p2=&b;
    swap(p1,p2);
    printf("the a is %d,the min is %d\n",*p1,*p2);
}

void swap(int *pp1,int *pp2)
{
    int *temp=NULL;
    if (*pp1 < *pp2)
    {   
        temp=pp1;
        pp1=pp2;
        pp2=temp;
    }   
    printf("the max is %d,the min is %d\n",*pp1,*pp2);
}
