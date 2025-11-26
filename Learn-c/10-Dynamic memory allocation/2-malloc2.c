#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;              // Use int for size
    float *ptr;         // Pointer to float array

    scanf("%d", &n);    // Read integer

    ptr = (float*) malloc(n * sizeof(float)); // Allocate n floats

    // Check to avoid crash
    if (n < 5) {
        printf("Enter at least 5\n");
        return 0;
    }

    ptr[0] = 3;
    ptr[1] = 6;
    ptr[2] = 9;
    ptr[3] = 12;
    ptr[4] = 15;

    for (size_t i = 0; i < n; i++) {
        printf("%f\n", ptr[i]);
    }

    return 0;
}
