#include<stdio.h>
//copy array a[] to b[].
void main()
{
    char a[]="I am a boy.",b[20];
//    char i;
//    for(i=0;i<20;i++)
//    {
//        b[i]=a[i];
//        printf("%c",b[i]);
//    }
    char *pointer;
    int i;
    pointer=a;
    for(i=0;(*pointer)!='\0';pointer++)
    {
        b[i]=(*pointer);     
        printf("%c",b[i]);
        i++;
    }
}
