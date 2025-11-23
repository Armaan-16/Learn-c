#include<stdio.h>

int main(){
    char a='a';
    char *ptr=&a;
    printf("The value of a is %d\n",a);
    printf("The value of a using pointer is %u\n",ptr);
    ptr++; // pointer increment
    printf("The value of a after incrementing pointer is %u\n",ptr); // character increases by 1 byte
    return 0;   
}