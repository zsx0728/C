#include<stdio.h>

int main(void)
{
    int *p;
    int a[100];
    int x=10;

    p=&x;

    printf("the *p is %d,the p is %p\n",*p,p);
    printf("the a is %p,the a is %d\n",a,a);
    printf("the a[0] is %p,the a[0] is %d\n",a[0],a[0]);
    printf("the &a[0] is %p,the &a[0] is %d\n",&a[0],&a[0]);
    printf("the a[99] is %p,the a[99] is %d\n",a[99],a[99]);
    printf("the &a[99] is %p,the &a[99] is %d\n",&a[99],&a[99]);
}
