#include<stdio.h>
#include<stdlib.h>
#Put a number n,sum 1+2+...+n.
int Sum(int n)
{
    int i=0,sum=0;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    return(sum);
}

int main()
{
    int count;
    int f;
    printf("Please input the count:");
    scanf("%d",&count);
    if (count<0)
    {
        printf("please input a positive integer \n");
        exit(-1);
    }
    f=Sum(count);
    printf("the sum is %d\n",f);
    return 0;
}
