#include<stdio.h>

int main(void)
{
    char *temp = NULL;
    char *ptr[] = {"Pascal","Basic","Fortran","JAVA","Visual C"};
    int i,j;          

    for(i=0;i<4;i++)
    {   
        for(j=i+1;j<5;j++)
        {   
            if(strcmp(ptr[j],ptr[i])<0)
            {   
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }   
            printf("i=%d,j=%d,ptr[i]=%s,ptr[j]=%s\n",i,j,*(ptr+i),*(ptr+j));
        }   
    }   

    for(i=0;i<5;i++)
    {   
        printf("%s \n",*(ptr+i));
    }   
}
