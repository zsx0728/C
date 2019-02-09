#include<stdio.h>
#include<math.h>
//in linux,please use gcc CircleArea.c -lm -o area
int main()
{
    float a=0,b=0,c=0,s=0,area=0;
    printf("please input the first number:\n");
    scanf("%f",&a);
    printf("please input the second number:\n");
    scanf("%f",&b);
    printf("please input the third number:\n");
    scanf("%f",&c);
    s=(a+b+c)/2;
    printf("the s number is %f\n",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is %7.2f\n",area);
}
