#include<stdio.h>
//input 10 scores,calculate the avg
void main()
{
    float score[10]={0.0},sum=0;
    float avg;
    int i;
    printf("Please input 10 scores:\n");
    for(i=0;i<10;i++)
    {   
        scanf("%f",&score[i]);
        sum=sum+score[i];
    }
    avg=sum/10;
    printf("the avg number is %5.2f\n",avg);
}
