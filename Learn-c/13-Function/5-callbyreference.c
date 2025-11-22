#include <stdio.h>

int sum(int*, int*); // Function declaration

int sum(int* a, int* b){ // Function definition
    *a = 6;  
    return *a + *b;
}

int main(){
    int x = 4, y = 5;
    printf("Sum is %d\n", sum(&x, &y));
    printf("Value of x after function call is %d\n", x);
    return 0;
}
