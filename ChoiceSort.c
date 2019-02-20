#include<stdio.h>
//use choice sort,the large number ahead.like input "7,1,6,9,8",output "9,8,7,6,1".
void main()
{
    void ChoiceSort(int *pointer,int number);
    int n,i,array[15]={'\0'};
    printf("please input the number of integers:\n");
    scanf("%d",&n);
    printf("please input integers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    ChoiceSort(array,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}

void ChoiceSort(int *pointer,int number)
{
    int temp=0,i,j;
    for(i=1;i<number;i++,pointer++)
        for(j=1;j<=number-i;j++)
            if(*pointer<*(pointer+j))
            {
                temp=*(pointer+j);
                *(pointer+j)=*(pointer);
                *(pointer)=temp;
            }
}
