#include<stdio.h>
#n!
int main(void)
{
    int fac(int);
    int n=0,i=0;
     
    printf("please input the number:\n");
    scanf("%d",&n);
    printf("the final is %d\n",fac(n));
}

int fac(int n)
{
    int multiply=1;
    while (n>0)
    {   
            multiply=n*multiply;
            n--;
    }   
    return multiply;
}
