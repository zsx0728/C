#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;

    while((ch = getchar()) != '\n')
    {
        if(islower(ch))
        {
            ch = toupper(ch);
            putchar(ch);
        }
        else if (isupper(ch))
        {
            ch = tolower(ch);
            putchar(ch);
        }
        else
            putchar(ch);
    }
    putchar(ch);
    return 0;
}
