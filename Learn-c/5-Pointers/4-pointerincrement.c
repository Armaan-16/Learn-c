#include<stdio.h>

int main(){
    int a=10;
    int *ptr=&a;
    printf("The value of a is %d\n",a);
    printf("The value of a using pointer is %u\n",ptr);
    ptr++; // pointer increment
    printf("The value of a after incrementing pointer is %d\n",*ptr); // integer increases by 4 bytes according to the architecture
    return 0;   
}