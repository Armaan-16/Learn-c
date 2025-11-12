#include<stdio.h>  

int main(){
    // write a if elese statement to check whether a number is even or odd.
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if(num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}