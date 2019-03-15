#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *oldpath="/home/cff/9/old.c";
    char *newpath="/home/cff/9/hardlink.c";
    if(link(oldpath,newpath)==-1)
    {
        perror("create hard link failed!");
        return 1;
    }
    printf("create hard link successful!\n");
    if(open(newpath,O_RDWR)<0)
    {
        perror("open error!");
        return 1;
    }
    printf("open successful!\n");
    sleep(10);
    if(unlink(newpath)<0)
    {
        perror("unlink error!");
        return 1;
    }
    printf("file unlink!\n");
    sleep(10);
    printf("well done!\n");
    return 0;
}
