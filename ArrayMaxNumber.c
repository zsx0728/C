#include<stdio.h>
//input an array,get the max number.
void main()
{
    int random[3][4],i,j,maxnumber=0;
    int MaxNumber(int a[][4],int m,int n); 
    for (i=0;i<3;i++)
    {   
        for (j=0;j<4;j++)
        {   
            scanf("%d",&random[i][j]);
            printf("%d\n",random[i][j]);
        }   
    }   
    maxnumber=MaxNumber(random,3,4);
    printf("the max number is:%d\n",maxnumber);
}

int MaxNumber(int a[][4],int m,int n)
{
    int temp=0,i,j;
    for (i=0;i<m;i++)
    {   
        for(j=0;j<n;j++)
        {   
            if (a[i][j]>temp) temp=a[i][j];
            else continue;
        }   
    }   
    return(temp);
}
