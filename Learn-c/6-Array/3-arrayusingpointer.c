#include<stdio.h>

int main(){
    int marks[]={23,45,56,89,90};
    int *ptr=&marks[0];

    for(int i=0;i<5;i++){
        printf("marks at the index %d is %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}