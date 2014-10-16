#include<stdio.h>
#include<malloc.h>
#define blocksize 1024*1

int main()
{
    char *p1,*p2,*p3;
    p1=(char *)malloc(blocksize);
    if(p1){
        printf("Memory Allocated at: %x/n",p1);
    }
    else
        printf("Not Enough Memory!/n");
    getchar();
    p1="Write In Memory/n";
    getchar();
}
