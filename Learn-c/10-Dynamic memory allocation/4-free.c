#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d",&n);

    ptr = (int*) malloc(n * sizeof(int));

    ptr[0] = 3;
    ptr[1] = 6;

    printf("%d\n", ptr[0]);   // Correct printf usage

    free(ptr); // Free the allocated memory
    printf("%d\n", ptr[0]); // Undefined behavior: accessing freed memory

   
    
    return 0;
}
