#include<stdio.h>
#include<string.h>
//get a character,if the string have the character,delete the character and print the string.

void main()
{
    char example[80];
    char character;
    int  length;
    int  i,j=0;

    printf("please input a character:\n");
    scanf("%c",&character);
    printf("please input a string:\n");
    scanf("%s",example);
    
    length=strlen(example);
    printf("the string is %s\n",example);
    printf("the length of string is %d\n",length);
    printf("the character is %c\n",character);
    
    //if example[i] equal character,delete it.
    for(i=0;i<length;i++)
    {
        if(example[i]!=character) 
        {
            example[j]=example[i];
            j++;
        }
        else 
            continue;
    }
    example[j]='\0';

    printf("%s\n",example);
}
