/*pointer.c*/

#include<stdio.h>
int main(void)
{
    int a,b;
    int *pointer_1,*pointer_2;
    a = 10;
    b = 100;
    pointer_1 = &a;
    pointer_2 = &b;
    printf("a = %d\nb = %d\n",a,b);
    printf("&a = %p\n&b = %p\n",pointer_1,pointer_2);
    printf("*pointer_1 = %d\n*pointer_2 = %d\n",*pointer_1,pointer_2);
    return 0;
}
