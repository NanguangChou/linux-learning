#include<stdio.h>  
#include<malloc.h>
#define blocksize 1024*100

int main()  
{  
	char *p1,*p2,*p3;  
	
	p1=(char *)malloc(blocksize);  
	if(p1)  
		printf("1Memory Allocated at: %x/n",p1);  
	else  
		printf("1Not Enough Memory!/n");  

	p2=(char *)malloc(blocksize);  
	if(p2)  
		printf("2Memory Allocated at: %x/n",p2);  
	else  
		printf("2Not Enough Memory!/n");

	p3=(char *)malloc(blocksize);  
	if(p3)  
		printf("3Memory Allocated at: %x/n",p3);  
	else  
		printf("3Not Enough Memory!/n");  

	free(p2);

	return 0;  
}  

