#include<stdio.h>

void main()
{
    int sort(int array[],int n);
    int i,record[10]={0};
    printf("Please input ten students records:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&record[i]);
    }
    sort(record,10);
    printf("the min record is %d\n",record[0]);
    printf("the max record is %d\n",record[9]);
    
    int sum=0;
    float avg=0;
    for(i=0;i<10;i++)
    {
        sum+=record[i];
    }
    avg=sum/10;
    printf("the avg number is %5.2f\n",avg);
}

int sort(int array[],int n)
{
    int temp=0,i,j;
    for(j=0;j<n;j++)
    {
        for(i=1;i<n-j;i++)
        {
            if(array[i]<array[i-1]) 
            {
                temp=array[i-1];
                array[i-1]=array[i];
                array[i]=temp;
            }
            else continue;
        }
    }
}
