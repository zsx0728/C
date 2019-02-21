#include<stdio.h>
//print array
void main()
{
    float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    float *p; 
    int   i,n;
    printf("please input a number between 0,1,2:\n");
    scanf("%d",&n);
    if(n==0)
    {   
        for(i=0;i<4;i++) 
        {   
            printf("%5.2f ",score[0][i]);
        }   
    }else if(n==1)
    {   
        for(i=0;i<4;i++) 
        {   
            printf("%5.2f ",score[1][i]);
        }   
    }else
    {   
        for(i=0;i<4;i++) 
        {   
            printf("%5.2f ",score[2][i]);
        }   
    }   
}
