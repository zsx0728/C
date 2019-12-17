#include<stdio.h>
int main(void)
{
    int array[3]={0},i,tempNum,MaxNum;

    for(i=0;i<3;i++)
    {
        printf("please input an integer:\n");
        scanf("%d",&array[i]);
        printf("array[%d] = %d\n",i,array[i]);
    }
    MaxNum=array[0];
    for(i=0;i<3;i++)
    {
        tempNum=max(array[i],array[i+1]);
        if(tempNum > MaxNum) MaxNum=tempNum ;
    }
    printf("the max num is %d\n",MaxNum);
}

int max(int x,int y)
{
    return (x>y)?x:y;
}
