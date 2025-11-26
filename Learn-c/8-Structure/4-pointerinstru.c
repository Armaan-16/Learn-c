#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    e1.code=1001;
    struct employee *ptr;
    ptr = &e1;
    printf("The code of employee is %d", (*ptr).code);
    return 0;
    
}