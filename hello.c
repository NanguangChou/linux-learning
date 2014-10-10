#include<stdio.h>
#define NUM_5 5;

int num_6=6;
void main(){
    int num_1=1;
    int num_2=2;
    printf("Hello World!\n");
    print();
    while(1){
        
    }
}
void print(){
    static int num_3=3;
    printf("%d\n",num_3);
    const int num_4=4;
    num_3++;
    printf("%d\n",num_3);
    printf("Hello from print!\n");
}
