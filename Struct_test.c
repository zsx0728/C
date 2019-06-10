#include<stdio.h>
#define NUMBER 3

struct student
{
    int num;
    char name[20];
    int score[3];
};

int main(void)
{
    struct student stu[NUMBER];
    int i;
    struct student *p;
    void print(struct student *);

    for(i=0;i<NUMBER;i++)
    {
        p=&stu[i];
        printf("please input the %d number:\n",i+1);
        scanf("%d",&(*p).num);
        printf("please input the name:\n");
        scanf("%s",p->name);
        printf("please input the score one:\n");
        scanf("%d",&(p->score[0]));
        printf("please input the score two:\n");
        scanf("%d",&(p->score[1]));
        printf("please input the score three:\n");
        scanf("%d",&(*p).score[2]);
    }    
    p=&stu[0];
    print(p);
}

void print(struct student *p)
{
    int j;
    
    for(j=0;j<NUMBER;j++)
    {
        printf("the number is %d,the name is %s,the score is %d,%d,%d\n",p->num,p->name,p->score[0],p->score[1],p->score[2]);
        p++;
    }
}
