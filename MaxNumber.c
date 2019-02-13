#include<stdio.h>
#input 5 numbers,get the max one.
void main()
{
    int example[5]={0},i,maxnumber;
    int max(int array[],int n); 
        
    printf("Please input 5 numbers:");
    for(i=0;i<5;i++)
    {   
        scanf("%d",&example[i]);
        printf("the number %d\n",example[i]);
    }   
    maxnumber=max(example,5);
    printf("the max number is %d\n",maxnumber);
}

int max(int array[],int n)
{
    int temp=0,j;
    for(j=0;j<n;j++)
    {   
        if(array[j]>temp)
             temp=array[j];
        else continue;
    }   
    return(temp);
}
