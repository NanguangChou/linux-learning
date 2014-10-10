#include <stdio.h>

int k;

void fun1()
{
	int array1[1024*1024];
	int b;

	array1[0]=b;
	k+=1;
	
	if (k<10) 
		fun1();

	return ;
}

int main()
{
	int n;
	for (n=0;n<10;n++)
		fun1();
	return 0;
}
