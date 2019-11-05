#include<stdio.h>
#include<ctype.h>
#define STOP '|'
int main(void)
{
    char ch,prev;
    int word=0,character=0,line=0;

    printf("Please input some words you want to calculate,end with \"|\":\n");
    ch = getchar();
    prev = ch;
    while (ch != STOP)
    {
        if(ch == '\n')
        {
            line++;
        }

        if(isalnum(ch))
        {
            character++;
        } 

        if(isalnum(prev) && !isalnum(ch))
        {
            word++;
        }

        prev = ch;
        ch = getchar();
    }

    printf("the words are %d,the lines are %d,the characters are %d.\n",word,line,character);
    return 0;
}
