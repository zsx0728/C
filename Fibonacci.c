#include<stdio.h>
#define Number 15

void main()
{
    int Fibonacci[Number]={0};
    int i=0;
    while (i<Number)
    {   
        if(i>=2) 
        {   
            Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
        }   
        else
            Fibonacci[i]=1;
        printf("%d ",Fibonacci[i]);
        if ((i+1)%5==0) printf("\n");
        i++;
    }   
}
