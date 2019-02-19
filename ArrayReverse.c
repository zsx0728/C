#include<stdio.h>
//print the array reverse.

void main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int *pointer;

    for(pointer=(array+9);pointer>=array;pointer--)
    {
        printf("%d ",*pointer);
    }
    printf("\n");
}
