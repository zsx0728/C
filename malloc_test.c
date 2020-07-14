#include<stdlib.h>
#include<stdio.h>
#编写一个函数，从标准输入读取一列整数，把这些值存储于一个动态分配的数组中并返回这个数组。输入的第一个数是数组包含的值的个数，它后面就是这些整数值。
int * array(int num)
{
    int * ptr, i, temp;
    ptr=(int *)malloc(num * sizeof(int));
    
    #确认内存动态分配成功
    if(ptr==NULL)
    {
        printf("Input ERROR!\n");
        exit (EXIT_FAILURE);
    } 

    #为数组赋值
    printf("Please input the values:\n");
    for(i=0;i<num;i++)
    {
        temp=scanf("%d", &ptr[i]);
        if(temp == 1) 
            continue;
        else 
            exit (EXIT_FAILURE);
    }

    return ptr;
}

int main(void)
{
    int num, * arrayPtr, i;
    printf("Input the number of array:");
    scanf("%d", &num);
    arrayPtr=array(num);
    
    #打印数组
    for(i=0;i<num;i++)
    {
        printf("the %d number is %d\n", i, arrayPtr[i]);
    }

    free(arrayPtr);
    exit (EXIT_SUCCESS);
}
