#include<stdio.h>
#define PI 3.1416
int main(void)
{
    float r,h,cvz;
    printf("please input the r length:\n");
    scanf("%f",&r);
    printf("please input the h length:\n");
    scanf("%f",&h);

    cvz=PI * r * r * h;
    printf("the cvz is %.2f\n",cvz);
}
