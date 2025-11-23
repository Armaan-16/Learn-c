#include <stdio.h>
int main() {
    int a; // integer variable declaration
    float b; // float variable declaration
    char c; // character variable declaration
    printf("Size of integer: %zu bytes\n", sizeof(a)); // print size of integer
    printf("Size of float: %zu bytes\n", sizeof(b)); // print size of float
    printf("Size of char: %zu bytes\n", sizeof(c)); // print size of char
    printf("Value of a: %d\n", a); // print uninitialized integer variable
    printf("Value of b: %f\n", b); // print uninitialized float variable
    printf("Value of c: %c\n", c); // print uninitialized char variable
    return 0;
}