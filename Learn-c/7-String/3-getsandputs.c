#include<stdio.h>

int main(){
    char str[34];
    printf("Enter a string\n");
    gets(str);  // gets is used to take input string with spaces
    printf("The entered string is:\n");
    puts(str);  // puts is used to print the string
    return 0;
}