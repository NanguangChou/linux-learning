#include <unistd.h>
#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
using std::cin;
using std::cout;
using std::endl;
int main(int argc, char **argv)
{
        int pid = fork();
        int n = 0;
        if(pid == -1)
                cout<<"error!!"<<endl;
        else if(pid == 0)
        {
                cout<<"this is a child "<< getpid()<<endl;
                execl("/home/openos/process1",argv[1],NULL);
                cout<<"child finished"<<endl;
        }
        else
        {
                cout<<"this is parent "<< getpid()<<", my child's pid is "<<pid<<endl;
                cout<<"waiting for child"<<endl;

                wait(NULL);
                cout<<"parent begin"<<endl;
                execl("/home/openos/process2",argv[1],NULL);
                cout<<"parent finished"<<endl;
        }
        return 0;
}
