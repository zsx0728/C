#include<stdio.h>
#input a radius number,get the circular area.
#define PI 3.142

double CircularArea(double R)
{
    double Area=0;
    Area=PI * R * R;
    return Area;
}

int main()
{
    double r=0;
    double final=0;
    printf("Please input the radius of the circle:");
    scanf("%lf",&r);
    final=CircularArea(r);
    printf("radius=%lf,final=%lf\n",r,final);
    return 0;
}
