#include<stdio.h>

int main(){
    char st[]="armaan"; //same as giving char st[]={'a','b','c'};
    for (int i=0; i<=6 ;i++)
    {
        printf("character is %c \n",st[i]);
        printf("%s",st);
    }
    return 0;
}