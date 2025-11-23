#include<stdio.h>

int changeValue(int a) {
    a = 20; // This change will not affect the original variable
    return 0;
}

int main(){
    int b = 10;
    changeValue(b);
    printf("Value of b after function call: %d\n", b); // b will still be 10
    return 0;
}