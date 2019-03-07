#include<stdio.h>
#define N 10
void SubArray1(int *x,int n);
void SubArray2(int *aPtr,int n);

int main(void)
{
    int a[N]={51,52,53,54,55,56,57,58,59,60};
    int i;
    printf("the array is:\n");
    
    for(i=0;i<N;i++)
        printf("%4d",a[i]);
    printf("\n");
    SubArray1(a,N);
    for(i=0;i<N;i++)
        printf("%4d",a[i]);
    printf("\n");
    printf("the array del 20 is:\n");
    SubArray2(a,N);
    for(i=0;i<N;i++)
        printf("%4d",a[i]);
        printf("\n");
}

void SubArray1(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        b[i]=b[i]-20;
}

void SubArray2(int *aPtr,int n)
{
    int i;
    for(i=0;i<n;i++)
        *(aPtr+i)=*(aPtr+i)-20;
}
