#include<stdio.h>

int BigNumber(int x,int y)
{
    int temp=0;
    (x>y)?(temp=x):(temp=y);
    return temp;
}

int SmallNumber(int x,int y)
{
    int temp=0;
    (x<y)?(temp=x):(temp=y);
    return temp;
}

void main()
{
    int inputarray[10]={0};
    int i=0,j=0,temp=0;
    printf("Please input ten integer:\n");
    for(i=0;i<10;i++) scanf("%d",&inputarray[i]);
    for(j=9;j>0;j--)
    {
        for (i=0;i<j;i++)
        {
            temp=BigNumber(inputarray[i],inputarray[i+1]);
            inputarray[i]=SmallNumber(inputarray[i],inputarray[i+1]);
            inputarray[i+1]=temp;
        }
    }
    for(i=0;i<10;i++) printf("The %d number is:%d\n",i,inputarray[i]);
}
