#include<stdio.h>
#include<limits.h>
int main(void)
{
    unsigned a = UINT_MAX;
    int      b = INT_MAX,c=INT_MIN;
    printf("%u\n",a);
    printf("%u\n",a+1);
    printf("%u\n",a+2);
    printf("%d\n",b);
    printf("%d\n",b+1);
    printf("%d\n",c);
    printf("%d\n",c-1);
}

/*
4294967295
0
1
2147483647
-2147483648
-2147483648
2147483647
*/
