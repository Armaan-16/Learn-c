// array contains multiple values of same data type
#include<stdio.h>
// declaration and initialisation of array
int main(){
    int marks[4];

    marks[0] = 23;
    marks[1] = 45;
    marks[2] = 56;
    marks[3] = 89;
    printf("Marks of student 1 is %d\n", marks[0]);
    printf("Marks of student 2 is %d\n", marks[1]); 
    printf("Marks of student 3 is %d\n", marks[2]);
    printf("Marks of student 4 is %d\n", marks[3]);
    return 0;
}