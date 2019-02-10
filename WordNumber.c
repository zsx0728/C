#include<stdio.h>
#include<string.h>
//put a string and return the word number.
int main()
{
    char str[50]={""};
    int i,WordNumber=0;
    gets(str);
    puts(str);
    for(i=1;i<50;i++)
    {   
        if (str[i]==' ' && (str[i-1] != ' '))
        {   
            WordNumber+=1;
        }   
        else if (str[i] == '\0' && (str[i-1] != '\0'))
        {   
            WordNumber+=1;
        }   
        else
        continue;
    }   
    printf("the word number is %d\n",WordNumber);
    return 0;
}
