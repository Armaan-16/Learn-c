#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d",&n);

    ptr = (int*) malloc(n * sizeof(int));

    ptr[0] = 3;
   

    printf("%d\n", ptr[0]);   // Correct printf usage
    ptr = (int*) realloc(ptr, 2 * n * sizeof(int)); // Reallocate to double size

   
    
    return 0;
}
