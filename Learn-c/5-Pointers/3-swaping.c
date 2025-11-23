#include <stdio.h>
void swap(int *a, int *b); // Function declaration
void swap(int *a, int *b){ // Function definition
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 4, y = 5;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y); // Function call
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}