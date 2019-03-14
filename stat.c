#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
main()
{
    struct stat buf;
    stat("new.c",&buf);
    printf("new.c file size=%d\n",buf.st_size);
    printf("new.c file owner UID=%d\n",buf.st_uid);
}
