#include<stdio.h>

int main(){
    int marks[5];
    printf("enter marks of student\n");

    for (int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("the value of marks %d\n",marks[i]);
    }
    return 0;
}