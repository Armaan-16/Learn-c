#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is in the range of 1 to 100
    // We use the logical AND (&&) operator to ensure
    // both conditions (num >= 1 AND num <= 100) are true.
    if(num >= 1 && num <= 100) {
        printf("%d is in the range of 1 to 100.\n", num);
    } else {
        printf("%d is not in the range of 1 to 100.\n", num);
    }

    return 0;
}