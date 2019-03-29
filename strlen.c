#include<stdio.h>
#include<float.h>
//pay attention "unsigned int"!
int main(void)
{
    char str1[]="abcdefg";
    char str2[]="abc";
    char i=NULL;

    printf("%u\n",i);  
    printf("%u\n",i-1);
 
    if(strlen(str2)-strlen(str1)>0)
    {
        printf("str2 is longer than str1,one\n");
    }

    if(strlen(str2)>strlen(str1))
    {
        printf("str2 is longer than str1,two.\n");
    }
    else
    {
        printf("str1 is longer than str2,three.\n");
    }

}
