#include<stdio.h>
//tranform the lowercase letters to capital letters.
void main()
{
    char example[80];
    int i;
    printf("please input the words you want to transform:\n");
    scanf("%s",example);

    for (i=0;i<strlen(example);i++)
    {
        if (example[i]>=97 && example[i]<=122)
        {
            example[i]-=32;
        }
        else continue;
    }
    printf("%s\n",example);
}
