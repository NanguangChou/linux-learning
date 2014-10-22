
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

void *thread_func(void *arg)
{
        sleep(100);
}

int main()
{
        pthread_t tid;
        int num;

        getchar();

        for(num = 0; num < 100; ++num)
        {
                if(pthread_create(&tid,NULL,thread_func,NULL) != 0)
                {
                        printf("thread creating failed\n");
                        return 1;
                }
                else
                        printf("%d th threads creating success\n",num+1);


        }

        sleep(100);
        printf("the main process terminates\n");
        return 0;
}
