#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd;
    void *  mmap_addr;

    fd=open("./stdio.h",O_RDWR);
    mmap_addr=(void *) mmap(0,4096,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);

    strcpy(mmap_addr,"hello filemap");

    getchar();
    return 0;
}
