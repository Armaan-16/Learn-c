#include <stdio.h>

int main() {
    int i = 69;
    int *p = &i; // Pointer p holds the address of i
    printf("The address of i is %p\n", &i);
    printf("The address stored in pointer p is %u\n", p);
    return 0;
}
