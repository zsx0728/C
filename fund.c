#include<stdio.h>
#define FUND 100
int main(void)
{
    int n;
    float fund;

    fund = FUND;
    for(n=1;fund >= 10.0;n++)
    {
        fund = fund * (1 + 0.08);
        fund = fund - 10.0;
        printf("the %d year fund is %f\n",n,fund);
    }
}
